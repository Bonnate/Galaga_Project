#pragma once

#include "Sprite.h"

#define PLAYER_BULLET_X_GAP 13

class Player : public Sprite
{
private:
	float mMoveSpeed;

public:
	Player(float px, float py);
	~Player();

	void start();
	void update();

	void move();
	void fire();
};

