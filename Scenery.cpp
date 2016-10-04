#include "Scenery.h"



tb::Scenary::Scenary() :
	Identify(),
	runing(false)
{

}

tb::Scenary::Scenary(std::string nameObject) :
	Identify(nameObject),
	runing(false)
{

}


tb::Scenary::~Scenary()
{
	this->DestroyActors();
}

void tb::Scenary::Draw(sf::RenderWindow & window)
{
	for (auto item : this->actors)
	{
		item->Draw(window);
	}
}

void tb::Scenary::UpdateAfterEvent()
{
	for(auto item : this->actors)
	{
		item->UpdateAfterEvent();
	}
}

void tb::Scenary::Update(sf::Event evento)
{
	for (auto item : this->actors) {
		item->Update(evento);
	}
}

void tb::Scenary::UpdateBeforEvent()
{
	for (auto item : this->actors)
	{
		item->UpdateBeforEvent();
	}
}

void tb::Scenary::ClearWindow(sf::RenderWindow & window)
{
	window.clear(sf::Color::Color(0, 50, 50, 0));
}

void tb::Scenary::InitActors()
{
	if (this->runing == false) {
		this->BuildActors();	
		this->runing = true;
	}
}

void tb::Scenary::DestroyActors()
{
	int size = this->actors.size();
	for (int i = 0; i < size; i++)
	{
		delete[] this->actors[0];
	}
}

void tb::Scenary::AddActor(Actor & actor)
{
	this->actors.push_back(&actor);
}

void tb::Scenary::ShortActors()
{
	std::sort(this->actors.begin(), this->actors.end(), [](const tb::Actor *a,const tb::Actor *b) -> bool {
		return a->getZ_Index() > b->getZ_Index();
	});
}
