#pragma once

#include "Scenary.h"

#include "NameDefine.h"
#include "ActorMain.h"

class SceneMain :
	public tb::Scenary
{
public:
	SceneMain();
	~SceneMain();

	// Inherited via Scenery
	virtual bool ChangeScene(std::vector<sf::Event>& lastEvent) override;
	virtual std::string NextScene() override;
	virtual void BuildActors() override;
};

