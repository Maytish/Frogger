#pragma once
#include <SFML\Graphics.hpp>

class Entity
{
private:
	sf::Texture bakground;
	
	// sprite och texture
public:
	Entity();
	~Entity();
	void Draw(sf::RenderWindow &window);
	sf::RectangleShape GetShape();

	sf::RectangleShape shape;
	/*float originalPosX, originalPosY;*/

};

