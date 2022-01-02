#pragma once
#include <SFML/System.hpp>
/* Class to manage the time step
*/
class TimeStep
{
private:
	sf::Clock* clock;
	const double dt = 0.01;

	double currentTime;
	double reservoirOfTime;
	

public:
	TimeStep(sf::Clock* clock);
	virtual ~TimeStep();
	void takeSteps();
};

