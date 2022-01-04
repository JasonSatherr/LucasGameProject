#include "Player.h"

void Player::characterInit()
{
	//this->size.x = 50.0f;
	//this->size.y = 50.0f;
	this->bodyColor = sf::Color::Yellow;
	this->position = sf::Vector2f(20.0f, 300.0f);
	//this->body.setSize(this->size);
	this->body.setFillColor(this->bodyColor);
	this->body.setPosition(this->position);
}

//void Player::move(float x, float y)
//{
//	this->position.x = this->position.x + x;
//	this->position.y = this->position.y + y;
//	this->body.setPosition(this->position);
//}

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
	/*This function will update all necessary parameters of the player object every time step
		@returns  void
		@param dt The size of the time step
		*/

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
		//this->move();
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		this->velocity.x = 1000.0f;
		//this->move();
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		// quit...
	}
	else {
		this->velocity.x = 0.0f;
	}


}
