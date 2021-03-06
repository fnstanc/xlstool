# -*- coding: utf-8 -*-
#!/usr/bin/env python
# File Name: cpp_codegen.py
# Author: Stan.Lch
# Mail: fn.stanc@gmail.com
# Created Time: 2018/7/18 16:20:53

import os

header_file_template = '''/*
* @file: ${filename}
* @brief: This file is generated by xlstool, please don't edit it.
*/

#pragma once
#ifndef _XLSTOOL_${loader_name}_H
#define _XLSTOOL_${loader_name}_H

#include <map>
#include <string>
${includes}

namespace ${package_name} {
class ${loader_name} {
public:
    bool init(const std::string &bytes);
    ${getter_functions}

private:
    ${datablocks_name} data_root_;
    ${members}
}; //  ${loader_name}
} //  ${package_name}
#endif
'''


source_file_template = '''/*
* @file: ${filename}
* @brief: This file is generated by xlstool, please don't edit it.
*/

#include "${include}"

namespace ${package_name} {
${initialize_function}
${getter_functions}
} //  ${package_name}
'''


initialize_function_template = '''bool ${loader_name}::init(const std::string &bytes) {
    if (!data_root_.ParseFromString(bytes)) return false;
    ${initialize_blocks}
    return true;
}
'''


def gen_initialize_block(sheet_name):
    fmt = '''for(int i = 0; i < data_root_.{}_items_size(); ++i) {{
        const {} &item = data_root_.{}_items(i);
        {}_items_[item.id()] = &item;
    }}'''
    return fmt.format(sheet_name.lower(),
                      sheet_name, sheet_name.lower(), sheet_name)


def gen_getter_funcion(loader_name, sheet_name):
    fmt = '''int ${loader_name}::${type}_items_size() {
    return data_root_.${lower_type}_items_size();
}

const ${type} *${loader_name}::${type}_items(int index) {
    auto &item = data_root_.${lower_type}_items(index);
    return &item;
}

const ${type} *${loader_name}::${type}_find(int id) {
    auto iter = ${type}_items_.find(id);
    if(iter != ${type}_items_.end()) return iter->second;
    return nullptr;
}
'''
    content = fmt.replace("${type}", sheet_name)
    content = content.replace("${lower_type}", sheet_name.lower())
    content = content.replace("${loader_name}", loader_name)
    return content


def gen_cpp_header_file(package_name, loader_name,
                        datablocks_name, all_sheet_metas, output_path):
    filename = loader_name + ".h"
    file_content = header_file_template.replace("${filename}", filename)
    file_content = file_content.replace("${package_name}", package_name)
    file_content = file_content.replace("${loader_name}", loader_name)
    file_content = file_content.replace("${datablocks_name}", datablocks_name)

    include_lines = []
    member_lines = []
    getter_lines = []
    for xls_file, sheet_metas in list(all_sheet_metas.items()):
        for sheet_meta in sheet_metas:
            sheet_name = sheet_meta.sheet_name
            # include_lines.append("#include \"{}.pb.h\"".format(sheet_name))
            member_lines.append(
                "std::map<int, const {} *> {}_items_;".format(sheet_name,
                                                              sheet_name)
            )

            getter_lines.append(
                "int {}_items_size();".format(sheet_name, sheet_name)
            )

            getter_lines.append(
                "const {} *{}_items(int index);".format(sheet_name, sheet_name)
            )

            getter_lines.append(
                "const {} *{}_find(int id);".format(sheet_name, sheet_name)
            )

    include_lines.append("#include \"{}.pb.h\"".format(datablocks_name))

    includes = "\n".join(include_lines)
    file_content = file_content.replace("${includes}", includes)

    getter_functions = "\n    ".join(getter_lines)
    file_content = file_content.replace("${getter_functions}",
                                        getter_functions)

    members = "\n    ".join(member_lines)
    file_content = file_content.replace("${members}", members)

    file_path = os.path.join(output_path, filename)
    with open(file_path, "w") as f:
        f.write(file_content)


def gen_cpp_source_file(package_name, loader_name,
                        datablocks_name, all_sheet_metas, output_path):
    filename = loader_name + ".cc"
    file_content = source_file_template.replace("${filename}", filename)
    file_content = file_content.replace("${include}", loader_name + ".h")
    file_content = file_content.replace("${package_name}", package_name)

    initialize_blocks = []
    getter_functions = []
    for xls_file, sheet_metas in list(all_sheet_metas.items()):
        for sheet_meta in sheet_metas:
            sheet_name = sheet_meta.sheet_name
            initialize_blocks.append(gen_initialize_block(sheet_name))
            getter_functions.append(
                gen_getter_funcion(loader_name, sheet_name)
            )

    content = "\n    ".join(initialize_blocks)
    initialize_function = initialize_function_template.replace(
        "${initialize_blocks}", content)
    initialize_function = initialize_function.replace("${loader_name}",
                                                      loader_name)

    file_content = file_content.replace("${initialize_function}",
                                        initialize_function)

    content = "\n".join(getter_functions)
    file_content = file_content.replace("${getter_functions}", content)

    file_path = os.path.join(output_path, filename)
    with open(file_path, "w") as f:
        f.write(file_content)


def gen_code(package_name, loader_name,
             datablocks_name, all_sheet_metas, output_path):
    if not os.path.exists(output_path):
        os.makedirs(output_path)
    gen_cpp_header_file(package_name, loader_name,
                        datablocks_name, all_sheet_metas, output_path)
    gen_cpp_source_file(package_name, loader_name,
                        datablocks_name, all_sheet_metas, output_path)
