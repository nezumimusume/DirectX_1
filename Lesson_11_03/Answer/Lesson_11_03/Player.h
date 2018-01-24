#pragma once

#include "SkinModel.h" //SkinModel�N���X���g�p����̂ŁA�w�b�_�[���C���N���[�h�B


class Player
{
public:
	//�R���X�g���N�^�B
	Player();
	//�f�X�g���N�^�B
	~Player();
	//�X�V�B
	void Update();
	//�`��B
	void Draw(CCamera* camera);
	/////////////////////////////////////////////////
	// �������烁���o�ϐ��B
	/////////////////////////////////////////////////
	SkinModel m_model;		//���f���B
	CVector3 m_position = CVector3::Zero();	//���W�B
	CQuaternion m_rotation = CQuaternion::Identity();	//��]�N�H�[�^�j�I���B
};

extern Player* g_player;