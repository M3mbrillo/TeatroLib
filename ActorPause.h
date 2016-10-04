#pragma once
#include "Actor.h"

#include "NameDefine.h"

class ActorPause :
	public tb::Actor
{
private:
	sf::Text text;

public:
	ActorPause();
	~ActorPause();

	// Inherited via Actor
	virtual void UpdateAfterEvent() override;
	virtual void Update(sf::Event evento) override;
	virtual void UpdateBeforEvent() override;
};

