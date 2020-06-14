#pragma once

#include <stack>
#include "SFML/Graphics.hpp"
#include "GameState.h"

class StateManager
{
private:
	std::stack<GameState*> states;

public:
	void addState(GameState* state);
	void loop();
	void render(sf::RenderWindow* window);
	void keyPressed(int code);
	void keyReleased(int code);
};

