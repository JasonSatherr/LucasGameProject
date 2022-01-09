#pragma once
/** 
* This class shall declare abstract functions related to collisions
* 
* This is necessary to make sure that everything that can have collisions makes
* sure to handle those collisions
* 
* Somewhat based off this thread https://gamedev.stackexchange.com/questions/72387/how-do-i-handle-collision-response-between-many-different-types-of-game-objects
*/
class Collidable
{
	virtual bool CollidesWith(Collidable other) = 0;
	virtual void handleCollision(Collidable other) = 0;
	virtual void reactToCollision(Collidable other) = 0; //I don't know if this one is required....
};

