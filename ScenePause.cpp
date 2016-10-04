#include "ScenePause.h"


ScenePause::ScenePause() : 
	tb::Scenary(SCN_PAUSE)
{
	this->firstScreen = nullptr;
}


ScenePause::~ScenePause()
{
	delete[] this->firstScreen;
}

bool ScenePause::ChangeScene(std::vector<sf::Event>& lastEvent)
{
	return false;
}

std::string ScenePause::NextScene()
{
	return std::string();
}

void ScenePause::BuildActors()
{
	this->AddActor(*new ActorPause());
}

void ScenePause::ClearWindow(sf::RenderWindow & window)
{
	if (this->firstScreen == nullptr) {
		this->firstScreen = new sf::Image(window.capture());
	}
	
}
