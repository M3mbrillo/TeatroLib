#include <SFML/Graphics.hpp>

#include <iostream>

#include "Teatro.h"

#include "SceneMain.h"

int main()
{
	tb::Teatro GameEx(400, 500, "GameEx");
	tb::Stage* stage = tb::Stage::getInstance();
	stage->AddScenary(new SceneMain());


	stage->setCurrentScenary(SCN_MAIN);
	GameEx.StartGame();

	return 0;
}