#pragma once
#include "Scenary.h"

#include "ActorPause.h"

#include "NameDefine.h"

class ScenePause :
	public tb::Scenary
{
private:
	sf::Image* firstScreen;

public:
	ScenePause();
	~ScenePause();

	// Inherited via Scenary
	virtual bool ChangeScene(std::vector<sf::Event>& lastEvent) override;
	virtual std::string NextScene() override;
	virtual void BuildActors() override;
	virtual void ClearWindow(sf::RenderWindow &window) override;
};

