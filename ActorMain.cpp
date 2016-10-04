#include "ActorMain.h"



ActorMain::ActorMain() :
	tb::Actor(ACT_MAIN),
	circle(50.0f)
{
	this->circle.setFillColor(sf::Color::White);
	this->circle.setOutlineColor(sf::Color::Black);
	this->circle.setOutlineThickness(1.0f);
	this->circle.setPosition(100.0f, 100.0f);
	this->drawables.push_back(&this->circle);
}

ActorMain::~ActorMain()
{
}

void ActorMain::UpdateAfterEvent()
{

}

void ActorMain::Update(sf::Event evento)
{
	if (evento.type == sf::Event::EventType::KeyPressed) {
		switch (evento.key.code)
		{
		case sf::Keyboard::Left:
			this->circle.move(-10.0f, 0.0f);
			break;
		case sf::Keyboard::Right:
			this->circle.move(10.0f, 0.0f);
			break;			
		}
	}
}

void ActorMain::UpdateBeforEvent()
{

}
