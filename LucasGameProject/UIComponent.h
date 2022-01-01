#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
/* Class to handle the user interface
*/
class UIComponent
{


protected:
	sf::Vector2f position;
	sf::Text text;


public:
	UIComponent(sf::Font * font, float x, float y);
	virtual ~UIComponent();
	virtual void update() = 0;
	virtual void draw(sf::RenderWindow* window) = 0;
};