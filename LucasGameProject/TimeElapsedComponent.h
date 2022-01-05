#pragma once
#include "UIComponent.h"
#include <SFML/System.hpp>
class TimeElapsedComponent : public UIComponent
{
private:
	int secondsElapsed;
	sf::Clock* clock;
	void updateSecondsElapsed();

public:
	
	TimeElapsedComponent(sf::Font * font, sf::Clock* clock);
	virtual ~TimeElapsedComponent();
	void update(double dt);
	void draw(sf::RenderWindow* window);
};

