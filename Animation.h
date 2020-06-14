#pragma once

#include "SFML/Graphics.hpp"

class Animation
{
private:
	sf::IntRect* bounds;
	int frames;
	sf::Clock clock;
	int resetValue;

public:
	Animation(sf::IntRect* rect, int framesNumber);
	void changeFrame();
	sf::IntRect getBounds();
};

