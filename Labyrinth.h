#pragma once

#include "PacMan.h"
#include "Ghost.h"

class Labyrinth
{
public:
	static const int SizeX = 28;
	static const int SizeY = 36;

	Labyrinth();
	int getTileCode(int x, int y);
	
	bool tileBlocksEntity(int x, int y);
	bool isIntersection(int x, int y);

	void removeDot(PacMan* pacman, Ghost* ghost1, Ghost* ghost2, Ghost* ghost3, Ghost* ghost4);

private:
	int tiles[SizeX][SizeY];
};

