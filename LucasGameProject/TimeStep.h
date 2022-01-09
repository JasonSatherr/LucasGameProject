#pragma once
#include <SFML/System.hpp>
#include "Player.h"
#include "MovementPhysics.h"
#include "Updatable.h"
#include "Collidable.h"
/* Class to manage the time step
*/
class TimeStep
{
private:
	sf::Clock* clock;
	const double dt = 0.01;
	//Time bookmark to calculate time between frames
	double currentTime;
	//leftover time
	double reservoirOfTime;
	//list of objects to update every timestep
	std::vector<Updatable *> updatables;
	//list of objects to check for collisions every time step
	std::vector<Collidable*> collidables; //Perhaps we need to feed this into another class to handle this
	

public:
	/**
	* constructor for the timestep
	* 
	* @param clock Pointer to the clock to use to manage the timestep
	*/
	TimeStep(sf::Clock* clock);
	virtual ~TimeStep();

	/**
	* Step by dt, timeElapsed/dt times
	* 
	* Called within the update() loop of the game.
	* Contains a loop that will update over all updatables
	* And call update on those objects, feeding them dt
	* at the same time.
	*/
	void takeSteps();

	/**
	* Adds updatable to the list of updatables
	* 
	* Adds updatable to the list of updatables to iterate over
	* 
	* @param updatable pointer to the updatable which needs to be
	*	added to the updatable list of the object
	*/
	void addUpdatable(Updatable* updatable);
	/**
	* Concats list of updatables to the list of updatables
	*
	* Concats list of updatables to the list of updatables to iterate over
	*
	* @param vector of updatable pointers to add to
	*	the updatable list of the object
	*/
	void addUpdatables(std::vector<Updatable*> updatables);

	/**
	* Adds collidable to the list of collidables
	*
	* Adds collidable to the list of collidables to iterate over
	*
	* @param collidable pointer to the collidable which needs to be
	*	added to the collidable list of the object
	*/
	void addCollidable(Collidable* collidable);
	/**
	* Concats list of collidables to the list of collidables
	*
	* Concats list of collidables to the list of collidables to iterate over
	*
	* @param vector of collidable pointers to add to
	*	the collidable list of the object
	*/
	void addCollidables(std::vector<Collidable*> collidables);

};

