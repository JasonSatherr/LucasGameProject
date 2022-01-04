#pragma once
/*  Class for all classes with update funtions to inherit from
*/
class Updatable
{
public:
	virtual void update(double dt) = 0;
};

