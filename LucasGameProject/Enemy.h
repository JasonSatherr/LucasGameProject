#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Character.h"
/**
* Class to define enemy behavior
*
* Enemy will represent an enemy and define many functions, such as move, 
* shoot, isOnFloor, etc.
* We should divide the enemy into subclasses to describe enemies that act
* differently.
*/
class Enemy : public Character
{
private:
	//Setup default characteristics
	void characterInit();

	//State memory
	//True if the enemy was moving right
	bool isMovingRight;

	//update functions
	//Updates Velocity
	void updateVelocity();
	

public:
	/**
	* Sets up the enemy
	* 
	* Calls characterInit to setup the necessary attributes of the enemy
	*/
	Enemy();
	virtual ~Enemy();

	/**
	* draws the enemy
	* 
	* @param window Pointer to the window to draw to
	*/
	void draw(sf::RenderWindow* window);

	/**
	* Updates the attributes of the enemy class
	* 
	* Updates the attributes of the enemy class in relation to whatever
	* timestep size (dt) that we chose in the timestep class.
	* 
	* @param dt Amount of time to step by
	*/
	void update(double dt);

};

