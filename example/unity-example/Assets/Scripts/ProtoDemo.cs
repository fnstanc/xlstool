using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using MyGame;

public class ProtoDemo : MonoBehaviour {

	// Use this for initialization
	void Start () {
        var ta = Resources.Load<TextAsset>("ConfigData");
        ConfigData.Init(ta.bytes);

        var goods = ConfigData.GoodsFind(3400);
        Debug.LogFormat("goods 3400: {0}", goods.ToString());

        var skill = ConfigData.SkillFind(12020);
        Debug.LogFormat("skill 12020 {0}", skill.ToString());

        for (int i = 0; i < ConfigData.GoodsCount(); ++i)
        {
            var g = ConfigData.GoodsItem(i);
            Debug.LogFormat("goods iteration {0}: {1}", i, g.ToString());
        }
	}

}
