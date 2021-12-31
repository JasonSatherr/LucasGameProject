#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Character
{
private:
	//Setup default characteristics
	void characterInit();

protected:
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

	Character();
	virtual ~Character();

	void draw(sf::RenderWindow* window);
	virtual void updateCharacter() = 0;


};
