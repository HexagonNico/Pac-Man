#pragma once

#include "SFML/Graphics.hpp"
#include "Console.h"
#include "StateManager.h"

class Engine
{
private:
	static sf::RenderWindow window;
	static Console console;
	static StateManager gamestates;

public:
	static void init();
	static bool isRunning();
	static void handleEvents();
	static void render();
};