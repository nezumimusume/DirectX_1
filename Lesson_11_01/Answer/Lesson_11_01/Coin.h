#pragma once

#include "SkinModel.h" //SkinModelクラスを使用するので、ヘッダーをインクルード。

class Coin
{
public:
	//コンストラクタ。
	Coin();
	//デストラクタ。
	~Coin();
	//更新。
	void Update();
	//描画。
	void Draw(CCamera* camera);
	/////////////////////////////////////////////////
	// ここからメンバ変数。
	/////////////////////////////////////////////////
	SkinModel m_model;		//モデル。
	CVector3 m_position = CVector3::Zero();	//座標。
	bool m_isGet = false;	//コイン取得フラグ。
};

const int NUM_COIN = 5;
extern Coin* g_coin[NUM_COIN];
