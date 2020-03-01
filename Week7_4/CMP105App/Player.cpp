#include "Player.h"
#include <iostream>

Player::Player()
{
	setPosition(200, 200);
	setSize(sf::Vector2f(100, 100));
	hasFired = false;
}


Player::~Player()
{
	std::cout << "Player object destroyed!\n";
}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Space))
	{
		input->setKeyUp(sf::Keyboard::Space);
		int x = rand() % 600;
		int y = rand() % 400;
		setPosition((float)x, (float)y);
	}

	if (input->isKeyDown(sf::Keyboard::Enter))
	{
		hasFired = false;

		if (!hasFired)
		{
			bullet = spawn(getPosition() + sf::Vector2f(getSize().x / 2, getSize().y / 2));
			hasFired = true;
		}
	}
}

void Player::update(float dt) 
{
	if (hasFired)
	{
		bullet->update(dt);
	}
}

Bullet* Player::spawn(sf::Vector2f pos)
{
	newBullet.setPosition(pos);
	return &newBullet;
}