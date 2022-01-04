#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Character.h"

class Enemy : public Character
{
private:
	//Setup default characteristics
	void characterInit();

	//State memory
	bool isMovingRight;

	//update functions
	void updateVelocity();
	

public:

	Enemy();
	virtual ~Enemy();

	void draw(sf::RenderWindow* window);
	void update(double dt);

};

