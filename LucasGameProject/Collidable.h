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
	/**
	* Will deem if the current collidable entity is colliding with some other...
	*/
	virtual bool CollidesWith(Collidable other) = 0;
	/**
	* Will handle the collision of this collidable object
	* 
	* @param other The other collidable that this object needs to react to.
	*/
	virtual void handleCollision(Collidable other) = 0;
	/**
	* Will handle the collision the other collidable object
	* 
	* @param other The other object that needs to react in the collision.
	*/
	virtual void reactToCollision(Collidable other) = 0; //I don't know if this one is required....
};

