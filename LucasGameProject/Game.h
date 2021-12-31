#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include "EventHandler.h"
#include "Initializer.h"
#include "Player.h"
#include "Enemy.h"
/*
*	Class that acts as the game engine
*/
class Game
{
private:
	//PRIVATE VARIABLES
	//sf variables
	sf::RenderWindow *window;
	sf::Event event;
	sf::VideoMode videoMode;
	sf::Music music;
	sf::Font font;
	sf::Text text;
	//Event Handler for updates
	EventHandler eventHandler;

	//Music player
	sf::Music musicPlayer;

	//The player
	Player player;
	//The enemy(s)
	Enemy enemy;

	//PRIVATE FUNCTIONS
	//Init functions
	void initVars();
	void initWindow();

public:

	//Constructor / Destructor
	Game();
	virtual ~Game();

	//Functions

	//Game updating functions
	void update();
	void render();

	//Window status function
	bool isWindowOpen();
};

