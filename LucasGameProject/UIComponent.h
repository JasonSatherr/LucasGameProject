#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "Updatable.h"
/**
* Class to handle the user interface
* 
* This class shall be the super class for all UI modules in the game.  This is
* useful because it shall provide data structures commonly found amongst all UI
* components.
* 
*/
class UIComponent : public Updatable
{


protected:
	//The position of the UI component
	sf::Vector2f position;
	//The text for the UI component to display
	sf::Text text;


public:
	/**
	* Constructor for the UIComponent abstract class.
	*
	* This constructor shall set the font, and initial position for all UI components
	*
	* @param font A pointer to the established font we want to use
	* @param x The x position of the UI Component
	* @param y The y position of the UI component
	*/
	UIComponent(sf::Font * font, float x, float y);
	virtual ~UIComponent();
	
	/**
	* Draws the UI component
	* 
	* @param window A pointer to the window to draw to
	*/
	virtual void draw(sf::RenderWindow* window) = 0;
};