#pragma once
#include "UIComponent.h"
#include <SFML/System.hpp>
/**
* The TimeElapsedComponent displays the amount of time passed in game
* 
* The TimeElapsedComponent is a UI Component that displays the amount of time 
* passed in game.  It is intended to update every time step of the game, and
* displays the time elapsed in floor(seconds_passed)
* 
*/
class TimeElapsedComponent : public UIComponent
{
private:
	int secondsElapsed;
	sf::Clock* clock;
	void updateSecondsElapsed();

public:
	/**
	* Constructor for the TimeElapsedComponent
	* 
	* Will tie a font and clock to the Time Elapsed Component so that
	* the object can tell the time from the clock and display the time
	* in the font
	* 
	* @param font The font to display the time elapsed in
	* @param clock The clock to get time information from
	*/
	TimeElapsedComponent(sf::Font * font, sf::Clock* clock);
	virtual ~TimeElapsedComponent();

	/**
	* Updates the time that the component should display
	* 
	* @param dt The delta in time, so that this function can be used by the timestep
	*	Note: dt isn't really needed for this component, or really a majority
	*	of any component... perhaps I should just try to make the dt and optional
	*	parameter...
	*/
	void update(double dt);

	/**
	* Draws the time counter to a certain window
	* 
	* @param window Points to the window to draw to
	*/
	void draw(sf::RenderWindow* window);
};

