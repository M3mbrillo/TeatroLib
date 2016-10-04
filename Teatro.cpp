#include "Teatro.h"


tb::Teatro::Teatro(int width, int heigth, std::string title) :
	window(sf::VideoMode(width, heigth), title)
{
	this->stage = tb::Stage::getInstance();
}

tb::Teatro::~Teatro()
{
	tb::Stage::Destroy();
}

void tb::Teatro::StartGame()
{
	//iniciamos la primera scena de todas
	this->stage->getCurrentScenary()->InitActors();

	while (this->window.isOpen())
	{
		this->Update(); //actors
		this->VerifyScene(); // end scene ?
		this->Draw(); //draw las scenas
	}	
}

void tb::Teatro::Draw()
{
	this->stage->getCurrentScenary()->Draw(this->window);
	this->window.display();
	this->stage->getCurrentScenary()->ClearWindow(this->window);	
}

void tb::Teatro::Update()
{
	this->stage->getCurrentScenary()->UpdateBeforEvent();	
	sf::Event evento;

	this->lastEvents.clear();
	while (window.pollEvent(evento))
	{
		this->lastEvents.push_back(evento);
		if (evento.type == sf::Event::Closed) {
			window.close();
		}
		this->stage->getCurrentScenary()->Update(evento);
	}

	this->stage->getCurrentScenary()->UpdateAfterEvent();
}

void tb::Teatro::VerifyScene()
{	
	if (this->stage->getCurrentScenary()->ChangeScene(this->lastEvents)) {		
		std::string nextSceneName = this->stage->getCurrentScenary()->NextScene();
		if (nextSceneName == "") {
			//es como un fin del juego...
			this->window.close();
		}		
	}
}
