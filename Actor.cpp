#include "Actor.h"



tb::Actor::Actor() :
	Identify(),
	drawables(),
	z_index(0.0f)
{
	
}

tb::Actor::Actor(std::string nameObject) :
	Identify(nameObject),
	drawables()
{

}


tb::Actor::~Actor()
{

}

float tb::Actor::getZ_Index() const
{
	const float z = this->z_index;
	return z;
}

void tb::Actor::Draw(sf::RenderWindow & window)
{
	for (auto item : drawables) {
		window.draw(*item);
	}
}
