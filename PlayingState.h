#pragma once
#include "GameState.h"

#include "Console.h"
#include "Labyrinth.h"
#include "Entity.h"
#include "PacMan.h"
#include "Ghost.h"

class PlayingState :
	public GameState
{
private:
	Console* console;
	Labyrinth* labyrinth;
	PacMan* pacman;
	Ghost* blinky;
	Ghost* pinky;
	Ghost* inky;
	Ghost* clyde;

	int waitTime;

	bool pacmanCanMove();
	void handleGhostMovement(Ghost* ghost);
	bool ghostCanMove(Ghost* ghost);
	float calculateDistance(Ghost* ghost, int addX, int addY);
	void teleportTunnels(Entity* entity);
	void handleGhostFrightening(Ghost* ghost);

public:
	void init();
	void loop();
	void render(sf::RenderWindow* window);
	void keyPressed(int code);
	void keyReleased(int code);
};

