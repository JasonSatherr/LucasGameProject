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

void TimeStep::takeSteps(Player* p)
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
		
		std::cout << timeLoops << std::endl;
		reservoirOfTime -= dt;
		//t += dt;
	}
}
