#pragma once

#include "Framework/GameObject.h"
#include "Bullet.h"

class Player : public GameObject
{
public:
	Player();
	~Player();

	void handleInput(float dt);
	void update(float dt);

	Bullet* getBullet()
	{
		return ptr_bullet;
	}

private:
	Bullet bullet;
	Bullet* ptr_bullet = &bullet;
};