#include "TimeElapsedComponent.h"

void TimeElapsedComponent::updateSecondsElapsed()
{
	this->secondsElapsed = this->clock->getElapsedTime().asSeconds();
}



TimeElapsedComponent::TimeElapsedComponent(sf::Text *text, sf::Clock* clock) : UIComponent(text)
{
	this->clock = clock;
}

TimeElapsedComponent::~TimeElapsedComponent()
{
}

void TimeElapsedComponent::update()
{
	this->updateSecondsElapsed();
}

void TimeElapsedComponent::draw()
{
}
