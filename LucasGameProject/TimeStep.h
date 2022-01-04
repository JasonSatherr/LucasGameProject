#pragma once
#include <SFML/System.hpp>
#include "Player.h"
#include "MovementPhysics.h"
#include "Updatable.h"
/* Class to manage the time step
*/
class TimeStep
{
private:
	sf::Clock* clock;
	const double dt = 0.01;

	double currentTime;
	double reservoirOfTime;
	std::vector<Updatable *> updatables;
	

public:
	TimeStep(sf::Clock* clock);
	virtual ~TimeStep();
	void takeSteps(Player *p);
	void addUpdatable(Updatable* updatable);
	void addUpdatables(std::vector<Updatable*> updatables);
};

