#pragma once
#include <SFML\Graphics.hpp>
#include "Entity.h"

class Fly : public Entity
{
private:
	float originalPosX, originalPosY;

public:
	Fly(float posX, float posY);
	~Fly();

	void Move(sf::Vector2u size);
};

