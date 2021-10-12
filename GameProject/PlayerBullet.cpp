#include "framework.h"

PlayerBullet::PlayerBullet(float px, float py) : Sprite("PlayerBullet", "", true, px, py)
{
	this->mMoveSpeed = 300.0f;
	this->mLifeTime = 10.0f;
}

PlayerBullet::~PlayerBullet()
{
	
}

void PlayerBullet::start()
{
	setImage("Asset/PlayerBullet.bmp");
}

void PlayerBullet::update()
{
	//�ð��� ������ �ı��˴ϴ�.. �޸� ���� ����
	mLifeTime -= Time::deltaTime;
	if (mLifeTime < .0f)
	{
		destroy(this);
	}


	//���� ������ �ı��˴ϴ�.. �޸� ���� ����
	if (getPy() < HEIGHT - HEIGHT_SCENE)
	{
		destroy(this);
	}

	
	//�÷��̾��� ������ ���� ���մϴ�.
	translate(0, -mMoveSpeed * Time::deltaTime);
}