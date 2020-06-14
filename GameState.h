#pragma once

#include "SFML/Graphics.hpp"

class GameState
{
public:
	virtual void init() {}
	virtual void loop() = 0;
	virtual void render(sf::RenderWindow* window) = 0;
	virtual void keyPressed(int code) = 0;
	virtual void keyReleased(int code) = 0;
};

