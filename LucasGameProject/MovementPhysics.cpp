#include "MovementPhysics.h"

void MovementPhysics::calcPhysics(sf::Vector2f& pos, sf::Vector2f& vel, sf::Vector2f& acc, double dt)
{
	vel.x += acc.x * dt;
	vel.y += acc.y * dt;
	pos.x += vel.x * dt;
	pos.y += vel.y * dt;
}
