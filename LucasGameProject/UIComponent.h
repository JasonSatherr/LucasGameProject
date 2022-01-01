#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
/* Class to handle the user interface
*/
class UIComponent
{


protected:
	const sf::Vector2f position;
	sf::Text * text;


public:
	UIComponent(sf::Text * text);
	virtual ~UIComponent();
	virtual void update() = 0;
	virtual void draw() = 0;
};