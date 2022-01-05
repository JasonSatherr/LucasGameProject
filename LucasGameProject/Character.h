#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "MovementPhysics.h"
#include "Updatable.h"
/**
* The character abstract class that describes characters
* 
* This class contains attributes that every character should have
* size, color, shape, etc.
* 
* It also contains functions that every character should have...
* shoot(), move(), etc.
*/
class Character : public Updatable
{
private:
	//Setup default characteristics
	void characterInit();

protected:
	//Player appearance
	//Player's shape
	sf::RectangleShape body;
	//Player's color
	sf::Color bodyColor;
	//Player's size
	sf::Vector2f size;

	//State properties
	//True if the player is on the floor
	bool isOnFloor;
	//idk what this is
	sf::Color color;
	//Amount of health the character originally has
	int health = 3;
	/**
	* Likely needs to be broken apart/have parameters and return values altered
	* 
	* Will decide to do when our character is colliding with one or more
	* objects.  These objects can be harmful, like bullets, or not, like
	* walls.  Or maybe we want to seperate this into a onCollision() for 
	* walls and onHit for dangerous things.
	*/
	void onCollision();

	//update functions
	/**
	* Updates the character's velocity
	* 
	* requires implementation, as different classes of characters
	* will likely alter their velocities in response to different
	* events.
	*/
	virtual void updateVelocity() = 0;

	//Actions
	void shoot();
	void die();
	void move(float x, float y);
	void move();
	void jump();
	void onHit();


public:
	//The position of the character
	sf::Vector2f position;
	//The velocity of the character
	sf::Vector2f velocity;
	//The acceleration of the character
	sf::Vector2f acceleration;
	/**
	* The character contructor
	* 
	* Calls character init to set the necessary attributes of the character
	*/
	Character();
	virtual ~Character();

	/**
	* Draws the character to the window
	* 
	* @param window The pointer to the window to draw to.
	*/
	void draw(sf::RenderWindow* window);
	/*virtual void update(double dt) = 0;
	^^^ demanded by a parent class (UPDATABLE.h) :)*/


};
