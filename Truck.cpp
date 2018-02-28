#include "Truck.h"

Truck::Truck(float posX, float posY)
{
	shape.setSize(sf::Vector2f(120, 50));
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;
}

Truck::~Truck()
{
}

void Truck::Move(float dx, float dy)
{
	shape.move(dx, dy);
}

bool Truck::outOfFrame(sf::Vector2u size)
{
	bool IsOutOfFrame = false;
	if (shape.getPosition().x > size.x)
	{
		shape.setPosition(sf::Vector2f(-shape.getSize().x, originalPosY));

	}
	
	else if (shape.getPosition().x < 0 - shape.getSize().x)
	{
		shape.setPosition(sf::Vector2f(size.x, originalPosY));
	}
	
	return IsOutOfFrame;
}
