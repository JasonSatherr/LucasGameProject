#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "Updatable.h"
/* Class to handle the user interface
*/
class UIComponent : public Updatable
{


protected:
	sf::Vector2f position;
	sf::Text text;


public:
	UIComponent(sf::Font * font, float x, float y);
	virtual ~UIComponent();
	//virtual void update(double dt) = 0;
	virtual void draw(sf::RenderWindow* window) = 0;
};