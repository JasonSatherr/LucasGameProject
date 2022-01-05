#include "TimeElapsedComponent.h"
//#include "string"
void TimeElapsedComponent::updateSecondsElapsed()
{
	/*
	*	@returns void
	*	Updates the seconds elapsed parameter using the clock passed to the class on
	*	initialization.
	*/
	this->secondsElapsed = this->clock->getElapsedTime().asSeconds();
}



TimeElapsedComponent::TimeElapsedComponent(sf::Font * font, sf::Clock* clock) : UIComponent(font, 20.0f, 10.0f)
{
	/*
	*	Constructor for the TimeElapsedComponent class.
	*	Will call parent constructors to set the text
	*/
	this->clock = clock;
	updateSecondsElapsed();
}

TimeElapsedComponent::~TimeElapsedComponent()
{
}

void TimeElapsedComponent::update(double dt)
{
	/*
	*	@returns void
	*	This function will update all necessary variables for the component to work as intended
	*/
	this->updateSecondsElapsed();
	this->text.setString(std::to_string((this->secondsElapsed)));
}

void TimeElapsedComponent::draw(sf::RenderWindow* window)
{
	/** 
	*	Draws the time elapsed
	* 
	*	@param window The window to draw to.
	*/
	window->draw(this->text);
}
