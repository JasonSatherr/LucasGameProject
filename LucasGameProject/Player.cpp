#include "Player.h"

void Player::characterInit()
{
	//this->size.x = 50.0f;
	//this->size.y = 50.0f;
	this->bodyColor = sf::Color::Yellow;
	this->position = sf::Vector2f(0.0f, 0.0f);
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
	
	window->draw(this->body);

}

void Player::updateCharacter()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		this->move(-10.0f, 0.0f);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		this->move(10.0f, 0.0f);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		// quit...
	}


}
