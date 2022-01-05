#pragma once
#include <SFML/Graphics.hpp>
class MovementPhysics
{
private:
	//sf::Vector2f position;
	//sf::Vector2f velocity;
	//sf::Vector2f acceleration;
public:
	/**	
	* Updates position and velocity
	* 
	* Updates position and velocity using delta time, acceleration,
	* position, and velocity
	* 
	* @return void
	* Perhaps we should change the function name to more precisely describe function.
	*/
	static void calcPhysics(sf::Vector2f& pos, sf::Vector2f & vel, sf::Vector2f & acc, double dt);
};

