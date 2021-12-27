#pragma once
#include <SFML/Window.hpp>

/*
*	The EventHandler class will handle events
* 
*	Events are ....
*/
class EventHandler
{
private:
	//VARIBLES
	sf::Event event;

	//FUNCTIONS
	void initVariables();

public:
	EventHandler();
	virtual ~EventHandler();

	void update(sf::Window * window);
};

