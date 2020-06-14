#include "Entity.h"

#include <cmath>

Entity::Entity(int tilePosX, int tilePosY)
{
	tileX = tilePosX;
	tileY = tilePosY;
	screenPosX = tilePosX * 16.0f + 8.0f + 8.0f;
	screenPosY = tilePosY * 16.0f + 8.0f;
}

float Entity::getScreenPosX()
{
	return screenPosX;
}

float Entity::getScreenPosY()
{
	return screenPosY;
}

int Entity::getTileX()
{
	return tileX;
}

int Entity::getTileY()
{
	return tileY;
}

void Entity::move(float x, float y)
{
	screenPosX += x;
	screenPosY += y;

	if ((int)(screenPosX + 8) % 16 == 0 && (int)(screenPosY + 8) % 16 == 0)
	{
		tileX = (int) round((screenPosX - 8) / 16);
		tileY = (int) round((screenPosY - 8) / 16);
	}
}

void Entity::teleport(int x, int y)
{
	tileX = x;
	tileY = y;
	screenPosX = x * 16.0f + 8.0f;
	screenPosY = y * 16.0f + 8.0f;
}
