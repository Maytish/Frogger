#include "Frog.h"

Frog::Frog(sf::Vector2u size)
{
	shape.setFillColor(sf::Color::Green);

	shape.setSize(sf::Vector2f(50.0f, 50.0f));

	shape.setPosition(sf::Vector2f(shape.getPosition().x + 640, size.y - shape.getSize().y)); 
}

Frog::~Frog()
{
}

void Frog::ResetPos(sf::Vector2u size)
{
	shape.setPosition(sf::Vector2f(shape.getPosition().x, size.y - shape.getSize().y));
}


void Frog::Move(sf::Event event)
{
	if (sf::Keyboard::Key::Left == event.key.code)
	{
		shape.move(-80, 0);
	}
	else if (sf::Keyboard::Key::Right == event.key.code)
	{
		shape.move(80, 0);
	}
	else if (sf::Keyboard::Key::Up == event.key.code)
	{
		shape.move(0, -80);
	}
	else if (sf::Keyboard::Key::Down == event.key.code)
	{
		shape.move(0, 80);
	}
}
