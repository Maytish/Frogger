#include "Fly.h"



Fly::Fly(float posX, float posY)
{
	shape.setSize(sf::Vector2f(30, 30));
	shape.setFillColor(sf::Color::Yellow);
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;
}


Fly::~Fly()
{
}

void Fly::Move(sf::Vector2u size)
{
}
