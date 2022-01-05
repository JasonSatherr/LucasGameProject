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
	
	//update velocity
	void updateVelocity();  //<- At the moment, this is more like a default update velocity
	//If nothing funky is happening with the state of the object

public:

	Player();
	virtual ~Player();
	/**
	* Draw the player to the window
	* @return void
	* @param window pointer to the window to draw to
	*/
	void draw(sf::RenderWindow* window);
	/**
	* This function will update attributes every time step
	* @return void
	* @param dt The size of the time step
	*/
	void update(double dt);


};







