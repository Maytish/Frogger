#pragma once
#include <SFML\Graphics.hpp>
#include "Entity.h"

class Truck : public Entity
{
private:
	float originalPosX, originalPosY;

public:
	Truck(float posX, float posY);
	~Truck();

	void Move(float dx, float dy);
	bool outOfFrame(sf::Vector2u size);
};

