#pragma once

class Entity
{
protected:
	float screenPosX;
	float screenPosY;
	int tileX;
	int tileY;

public:
	Entity(int tilePosX, int tilePosY);

	float getScreenPosX();
	float getScreenPosY();
	int getTileX();
	int getTileY();

	void move(float x, float y);
	void teleport(int x, int y);
};

