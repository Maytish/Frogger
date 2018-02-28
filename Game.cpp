#include "Game.h"
#include <iostream>
using namespace std;

Game::Game()
{
	window = new sf::RenderWindow(sf::VideoMode(1280, 960), "Frogger");
	frog = new Frog(window->getSize());


	// statisk allokerad array med pekare till objekt
	/*const int CAP = 4;
	Truck* truck[CAP] = {nullptr};*/
	
	/*for (int i = 0; i < CAP; i++)
	{
		truck[i] = new Truck(0, window->getSize().y / 2);
	}
	*/
	//truck[0] = new Truck(0, window->getSize().y);
	//truck[1] = new Truck(0, window->getSize().y / 1);
	//truck[2] = new Truck(0, window->getSize().y / 2);
	//truck[3] = new Truck(0, window->getSize().y / 3);
	//

	truck = new Truck(0, window->getSize().y / 2);
	truck2 = new Truck(window->getSize().x, window->getSize().y / 3);
	


	fly = new Fly(610, window->getSize().y /16 -35);
}

Game::~Game()
{
}

void Game::Loop()
{	
	while (window->isOpen())
	{
		sf::Event event;

		// handle all events
		while (window->pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window->close();
				break;
			case sf::Event::KeyReleased:
				frog->Move(event);
				break;
			}
		}
		// update the game
		
		if (truck->outOfFrame(window->getSize()) == false)
		{
			truck->Move(12.0, 0.0);
		}

		if (truck2->outOfFrame(window->getSize()) == false)
		{
			truck2->Move(-10.0, 0.0);	
		}

		if (frog->GetShape().getGlobalBounds().intersects(truck->GetShape().getGlobalBounds()) || frog->GetShape().getGlobalBounds().intersects(truck2->GetShape().getGlobalBounds()))
		{
			frog->ResetPos(window->getSize());
		}
		window->clear();
		
		sf::Texture backgroundimage;

		if (!backgroundimage.loadFromFile("Resources//backgroundny.png"))
		{
			cout << "failed to load bakrgound image" << endl;
			system("pause");
			
		}
		sf::Sprite backgroundsprite(backgroundimage);

		// draw objects here
		
		window->draw(backgroundsprite);
		
		frog->Draw(*window);
		fly->Draw(*window);

		/*for (size_t i = 0; i < 4; i++)
		{
			truck[i]->Draw(*window);
		}*/

		truck->Draw(*window);
		truck2->Draw(*window);

		window->display();
	}
}
