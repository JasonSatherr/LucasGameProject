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
	this->timeUI = nullptr;
	
}



Game::Game()
{
	/**
		Initializes the variables and windows of the Game Class	
	*/
	this->initVars();
	start::initAll(&(this->videoMode), &(this->window), &(this->music),
		&(this->font), &(this->text));
	this->timeUI = new TimeElapsedComponent(&(this->font), &(this->clock));
	this->timeStepper = new TimeStep(&(this->clock));
	this->timeStepper->addUpdatable(&this->player);
	this->timeStepper->addUpdatable(&this->enemy);
}


Game::~Game()
{
	/**
		Destructor

		Destroys:
		- The window
	*/

	delete this->window;
	delete this->timeUI;
	delete this->timeStepper;
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
	//this->player.updateCharacter();
	//this->enemy.updateCharacter();  BIG ISSUE, MOVE THESE INSIDE OF THE TIMESTEP!!
	this->timeUI->update();
	this->timeStepper->takeSteps(&player);
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
	enemy.draw(window);
	this->timeUI->draw(window);
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




