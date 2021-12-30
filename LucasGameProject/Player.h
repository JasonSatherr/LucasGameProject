#pragma once
#include <SFML/Graphics.hpp>
/**
*	Class to define player behavior
*	
*	Player will represent the player and define many functions, such as move, shoot, isOnFloor, etc.
*	Perhaps we shall create a super class for player to inherit from in the future, as the functions
*	listed above seem rather generic...
*/
class Player
{
private:
	
	//State properties
	bool isOnFloor;
	sf::Color color;

	//Actions
	//void shoot();
	//void move(float x, float y);
	//void jump();
	

public:

};

