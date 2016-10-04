#include "SceneMain.h"



SceneMain::SceneMain() :
	tb::Scenary(SCN_MAIN)
{

}


SceneMain::~SceneMain()
{
}

bool SceneMain::ChangeScene(std::vector<sf::Event>& lastEvent)
{
	return false;
}

std::string SceneMain::NextScene()
{
	return std::string();
}

void SceneMain::BuildActors()
{
	this->AddActor(*new ActorMain());
}
