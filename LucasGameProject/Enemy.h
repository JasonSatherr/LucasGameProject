#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Character.h"

class Enemy : public Character
{
private:
	//Setup default characteristics
	void characterInit();


public:

	Enemy();
	virtual ~Enemy();

	void draw(sf::RenderWindow* window);
	void updateCharacter();

};

