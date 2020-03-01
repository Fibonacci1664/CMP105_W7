#include "Companion.h"

/*
 * Need to include the Player.h here as we only forward declared in the companion.h which
 * was fine for using a player data type as a functions parameterized pointer, but as we
 * are actually using the 'p' object in the moveToPlayer function then we must have full
 * access to the Player.h file and this means we must therefore #include.
 * Doing it all this way though avoid circular dependencies.
 */
#include "Player.h"

Companion::Companion()
{
	setPosition(500, 500);
	setSize(sf::Vector2f(10, 10));
	setFillColor(sf::Color::Blue);
	setVelocity(500, 0);
}


Companion::~Companion()
{
}

void Companion::update(float dt)
{
	move(velocity*dt);
}

void Companion::moveToPlayer(Player* p)
{
	setPosition(p->getPosition());
}
