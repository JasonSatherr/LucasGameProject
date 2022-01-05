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
	/**
	* 
	* Initializes the variables of the EventHandler Class
	*
	* @return void	
	*/
	void initVariables();

public:
	EventHandler();
	virtual ~EventHandler();
	/**
	*
	* Updates the state of the game in relation to the windows events
	*
	* @param window A pointer to the window whose events are handled
	* @return void
	*/
	void update(sf::Window * window);
};

