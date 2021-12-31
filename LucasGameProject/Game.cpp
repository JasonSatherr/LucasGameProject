#include "Game.h"
/**
	The game engine class.  The heart of the game
*/
void Game::initVars()
{
	/**
	*	@return void
	* 
	*	Initializes the variables of the game class
	* 
	*/
	this->window = nullptr;
}

void Game::initWindow()
{
	/**
		@return void

		Customizes and creates the window
	*/
	this->videoMode.width = 800;
	this->videoMode.height = 600;
	this->window = new sf::RenderWindow(this->videoMode, "Lucas Game");
	this->window->setFramerateLimit(30);
}

Game::Game()
{
	/**
		Initializes the variables and windows of the Game Class	
	*/
	this->initVars();
	/*this->initWindow();*/
	start::initAll(&(this->videoMode), &(this->window), &(this->music),
		&(this->font), &(this->text));
}


Game::~Game()
{
	/**
		Destructor

		Destroys:
		- The window
	*/

	delete this->window;
}



void Game::update()
{
	/*
		@return void

		Updates the state of the game.
		Things that can change the state of the game.
		- Real time inputs
		- Events
		- An enemy dying
		- A new level 
		- etc.
	*/

	this->eventHandler.update(this->window);
	this->player.updateCharacter();
}

void Game::render()
{
	/*
	*	@return void
	* 
	*	Draws a new frame of the game.
	*/

	//I guess this is where we draw to the window...
	this->window->clear(sf::Color::Black);
	player.draw(window);
	// draw everything here...
	// window.draw(...);
	// end the current frame
	this->window->display();
}

bool Game::isWindowOpen()
{
	/*
	*	@return bool
	* 
	*	Checks if the game window is still open.
	*/
	return this->window->isOpen();
}




