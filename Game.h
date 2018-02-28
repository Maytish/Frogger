#pragma once
#include <SFML\Graphics.hpp>
#include "Frog.h"
#include "Truck.h"
#include "Fly.h"

class Game
{
private: 
	sf::RenderWindow *window;
	Frog *frog;
	Fly  *fly;

	Truck *truck;
	Truck *truck2;

public:
	Game();
	~Game();
	void Loop();

};

