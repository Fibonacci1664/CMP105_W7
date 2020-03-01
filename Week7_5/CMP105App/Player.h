#pragma once

#include "Framework/GameObject.h"

// Do not do this, circular dependencies is a big no no!
#include "Companion.h"

class Player : public GameObject
{
public:
	Player();
	~Player();

	void handleInput(float dt);
	void update(float dt);

	Companion* getCompanion()
	{
		return &companion;
	};

private:
	Companion companion;
};