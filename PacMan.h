#pragma once

#include "Entity.h"

#include <queue>
#include "Directions.h"

class PacMan
	: public Entity
{
private:
	std::queue<Direction> directions;
	int eatenDots;
	bool dead;

public:
	PacMan();

	void queueDirection(Direction dir);
	void move();
	std::queue<Direction> getDirections();
	void stop();

	void eatDot();
	int getDotsEaten();

	void setDead(bool d);
	bool isDead();
};

