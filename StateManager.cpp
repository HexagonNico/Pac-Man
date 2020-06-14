#include "StateManager.h"

void StateManager::addState(GameState* state)
{
	states.push(state);
	states.top()->init();
}

void StateManager::loop()
{
	states.top()->loop();
}

void StateManager::render(sf::RenderWindow* window)
{
	states.top()->render(window);
}

void StateManager::keyPressed(int code)
{
	states.top()->keyPressed(code);
}

void StateManager::keyReleased(int code)
{
	states.top()->keyReleased(code);
}
