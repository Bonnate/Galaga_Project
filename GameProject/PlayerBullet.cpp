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
	addBoxCollider2D(0, 0, 7, 13);
}

void PlayerBullet::onEnable()
{
	this->setActive(true);
	mLifeTime = 10.0f;
}

void PlayerBullet::update()
{
	//�ð��� ������ �ı��˴ϴ�.. �޸� ���� ����
	mLifeTime -= Time::deltaTime;
	if (mLifeTime < .0f)
	{
		this->setActive(false);
	}


	//���� ������ �ı��˴ϴ�.. �޸� ���� ����
	if (getPy() < HEIGHT - HEIGHT_SCENE)
	{
		this->setActive(false);
	}

	
	//�÷��̾��� ������ ���� ���մϴ�.
	translate(0, -mMoveSpeed * Time::deltaTime);
}