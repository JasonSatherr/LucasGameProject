#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
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
	//Setup default characteristics
	void playerInit();

	//Player appearance
	sf::RectangleShape body;
	sf::Color bodyColor;
	sf::Vector2f size;
	sf::Vector2f position;
	
	//State properties
	bool isOnFloor;
	sf::Color color;

	//Actions
	//void shoot();
	void move(float x, float y);
	//void jump();
	//void onHit();
	

public:

	Player();
	virtual ~Player();

	void draw(sf::RenderWindow* window);
	void updatePlayer();


};







