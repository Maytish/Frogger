#pragma once
#include <SFML\Graphics.hpp>
#include "Entity.h"

class Frog : public Entity
{
public:
	Frog(sf::Vector2u size);
	~Frog();

	void Move(sf::Event event);
	void ResetPos(sf::Vector2u size);

	// liv
	
};

