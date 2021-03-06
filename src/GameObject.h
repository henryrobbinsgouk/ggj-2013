#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Game.h"

class GameObject
{
	public:
		virtual ~GameObject() = 0;
		virtual void update() = 0;
		virtual void draw() = 0;
		
		sf::Vector2f position;
		sf::Vector2f velocity;
		sf::Sprite sprite;
		std::vector<sf::Image> images;
		GameScreen* parent;
};

#endif
