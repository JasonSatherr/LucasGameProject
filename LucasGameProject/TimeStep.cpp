#include "TimeStep.h"
#include <iostream>
TimeStep::~TimeStep()
{
}

TimeStep::TimeStep(sf::Clock* clock)
{
	this->clock = clock;
	this->currentTime = this->clock->getElapsedTime().asSeconds();
	this->reservoirOfTime = 0.0;
}

void TimeStep::takeSteps()
{
	double newTime = this->clock->getElapsedTime().asSeconds();
	double frameTime = newTime - currentTime;
	currentTime = newTime;

	this->reservoirOfTime += frameTime;
	int timeLoops = reservoirOfTime / dt;
	while (reservoirOfTime >= this->dt)
	{
		//integrate(state, t, dt);  Integrate should take care of all the physics updates...
		/*MovementPhysics::calcPhysics(p->position, p->velocity, p->acceleration, dt);*/
		for (auto it = begin(this->updatables); it != end(this->updatables); ++it) {
			(*it)->update(dt);
			
		}
		std::cout << timeLoops << std::endl;
		reservoirOfTime -= dt;
		//t += dt;
	}
}

void TimeStep::addUpdatable(Updatable* updatable)
{
	this->updatables.push_back(updatable);
}

void TimeStep::addUpdatables(std::vector<Updatable*> updatables)
{
	this->updatables.insert(this->updatables.end(), updatables.begin(), updatables.end());
}

void TimeStep::addCollidable(Collidable* collidable)
{
	this->collidables.push_back(collidable);
}

void TimeStep::addCollidables(std::vector<Collidable*> collidables)
{
	this->collidables.insert(this->collidables.end(), collidables.begin(), collidables.end());
}
