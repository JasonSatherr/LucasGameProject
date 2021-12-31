#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Character.h"
/**
*	Class to define player behavior
*	
*	Player will represent the player and define many functions, such as move, shoot, isOnFloor, etc.
*	Perhaps we shall create a super class for player to inherit from in the future, as the functions
*	listed above seem rather generic...
*/
class Player : public Character
{
private:
	//Setup default characteristics
	void characterInit();

	//Player appearance

	
	//State properties


	//Actions
	//void shoot();

	//void jump();
	//void onHit();
	

public:

	Player();
	virtual ~Player();

	void draw(sf::RenderWindow* window);
	void updateCharacter();


};







