#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "MovementPhysics.h"
#include "Updatable.h"
class Character : public Updatable
{
private:
	//Setup default characteristics
	void characterInit();

protected:
	//Player appearance
	sf::RectangleShape body;
	sf::Color bodyColor;
	sf::Vector2f size;

	//State properties
	bool isOnFloor;
	sf::Color color;
	int health = 3;
	
	void onCollision();

	//update functions
	virtual void updateVelocity() = 0;

	//Actions
	void shoot();
	void die();
	void move(float x, float y);
	void move();
	void jump();
	void onHit();


public:
	sf::Vector2f position;
	sf::Vector2f velocity;
	sf::Vector2f acceleration;
	Character();
	virtual ~Character();

	void draw(sf::RenderWindow* window);
	/*virtual void update(double dt) = 0;
	^^^ demanded by a parent class (UPDATABLE.h)*/


};
