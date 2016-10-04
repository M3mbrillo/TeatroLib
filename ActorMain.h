#pragma once

#include "NameDefine.h"

#include "Actor.h"


class ActorMain :
	public tb::Actor
{
private:
	sf::CircleShape circle;

public:
	ActorMain();
	~ActorMain();

	// Inherited via Actor
	virtual void UpdateAfterEvent() override;
	virtual void Update(sf::Event evento) override;
	virtual void UpdateBeforEvent() override;
};

