#include "Player.h"

void Player::characterInit()
{
	this->bodyColor = sf::Color::Yellow;
	this->position = sf::Vector2f(20.0f, 300.0f);
	this->body.setFillColor(this->bodyColor);
	this->body.setPosition(this->position);
}

Player::Player()
{
	this->characterInit();
	
}

Player::~Player()
{


}

void Player::draw(sf::RenderWindow * window)
{
	//this->body.setPosition(this->position);	//Done in the update function
	//For some reason...
	window->draw(this->body);

}

void Player::update(double dt)
{
	//NOTE, THE CODE HERE IS THE SAME FOR THE ENEMY CLASS, SO PERHAPS WE MOVE
	//THIS FUNCTION UP ONE INHERITANCE LEVEL?!
	updateVelocity();
	MovementPhysics::calcPhysics(this->position, this->velocity, this->acceleration, dt);
	this->body.setPosition(this->position);
}

void Player::updateVelocity()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		this->velocity.x = -1000.0f;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		this->velocity.x = 1000.0f;

	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		// quit...
	}
	else {
		this->velocity.x = 0.0f;
	}


}
