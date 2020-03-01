#pragma once

#include "Framework/GameObject.h"

// DO NOT DO THIS!, circular dependencies are a big no no!
//#include "Player.h"

/*
 * Because i am only using Player as a parameterized pointer i can just forward declare
 * instead of #including.
 */

class Player;		// FORWARD DECLARATION

class Companion : public GameObject
{
public:
	Companion();
	~Companion();

	void update(float dt);
	void moveToPlayer(Player* player);

private:
	
};