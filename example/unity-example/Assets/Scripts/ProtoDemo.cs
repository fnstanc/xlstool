﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using MyGame;

public class ProtoDemo : MonoBehaviour {

	// Use this for initialization
	void Start () {
        var ta = Resources.Load<TextAsset>("ConfigData");
        ConfigData.Init(ta.bytes);

        var goods = ConfigData.GetGoods(3400);
        Debug.LogFormat("goods: name {0}, id {1}", goods.ItemName, goods.Id);

        var skill = ConfigData.GetSkill(12020);
        Debug.LogFormat("skill: name {0}, level {1}", skill.SkillName, skill.SkillLevel);
	}

}
