#include "Character.h"

void Character::characterInit()
{
	this->size.x = 50.0f;
	this->size.y = 50.0f;
	this->bodyColor = sf::Color::White;
	this->position = sf::Vector2f(0.0f, 0.0f);
	this->velocity = sf::Vector2f(0.0f, 0.0f);
	this->acceleration = sf::Vector2f(0.0f, 0.0f);
	this->body.setSize(this->size);
	this->body.setFillColor(this->bodyColor);
	this->body.setPosition(this->position);
}

void Character::onCollision()
{
}

void Character::shoot()
{
}

void Character::die()
{

}

void Character::move(float x, float y)
{
	this->position.x = this->position.x + x;
	this->position.y = this->position.y + y;
	this->body.setPosition(this->position);
}

void Character::move()
{
	this->body.setPosition(this->position);
}

void Character::jump()
{
}

void Character::onHit()
{
	this->health--;
	if (this->health == 0) {
		this->die();
	}
}

Character::Character()
{
	characterInit();
	
}

Character::~Character()
{
}

void Character::draw(sf::RenderWindow* window)
{
	window->draw(this->body);
}
