#pragma once
#include <SFML/Graphics.hpp>
class MovementPhysics
{
private:
	sf::Vector2f position;
	sf::Vector2f velocity;
	sf::Vector2f acceleration;
public:
	static void calcPhysics(sf::Vector2f& pos, sf::Vector2f & vel, sf::Vector2f & acc, double dt);
	//Maybe make an overridden function that can 
	//take a custom defined class that we have that contains all of these
};

