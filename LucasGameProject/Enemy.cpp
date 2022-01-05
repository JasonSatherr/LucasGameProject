#include "Enemy.h"

void Enemy::characterInit()
{

	this->bodyColor = sf::Color::Magenta;
	this->position = sf::Vector2f(300.0f, 300.0f);
	this->body.setFillColor(this->bodyColor);
	this->body.setPosition(this->position);
}

Enemy::Enemy()
{
	this->characterInit();

}

Enemy::~Enemy()
{


}

void Enemy::draw(sf::RenderWindow* window)
{

	window->draw(this->body);

}

void Enemy::update(double dt)
{
	updateVelocity();
	MovementPhysics::calcPhysics(this->position, this->velocity, this->acceleration, dt);
	this->body.setPosition(this->position);
}

void Enemy::updateVelocity()
{
	//For now let's just have the little one move side to side...
	if (this->position.x <= 600.0f && this->isMovingRight) {
		this->move(2.0f, 0.0f);
		this->isMovingRight = true;
	}
	else if (this->position.x >= 300.0f) {
		this->move(-2.0f, 0.0f);
		this->isMovingRight = false;
	}
	else {
		this->isMovingRight = true;
	}

	//We might later benefit from defining enemies by their movement types later.
	//Additionally, do we handle things such as 'on hit' here?

}
