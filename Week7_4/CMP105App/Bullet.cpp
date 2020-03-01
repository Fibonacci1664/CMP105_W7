#include "Bullet.h"
#include <iostream>

Bullet::Bullet()
{
	setPosition(500, 500);
	setSize(sf::Vector2f(10, 10));
	setFillColor(sf::Color::Red);
	setVelocity(500, 0);
}


Bullet::~Bullet()
{
	std::cout << "Bullet object destroyed!\n";
}

void Bullet::update(float dt)
{
	move(velocity*dt);
}
