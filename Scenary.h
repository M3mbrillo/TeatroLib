#pragma once

#include <algorithm>

#include "Identify.h"
#include "Actor.h"



namespace tb {
	class Scenary : public Identify
	{

	private:
		std::vector<Actor*> actors;	//cre actores de manera dinamica pls Q_Q
		bool runing;		

	public:
		Scenary();
		Scenary(std::string nameObject);
		~Scenary();		
		
		void AddActor(Actor&);
		void ShortActors();


		//loop game function
		void Draw(sf::RenderWindow &window);
		
		void UpdateAfterEvent();
		void Update(sf::Event evento);
		void UpdateBeforEvent();

		virtual bool ChangeScene(std::vector<sf::Event>&lastEvent) = 0;
		virtual std::string NextScene() = 0;
		virtual void BuildActors() = 0;

		virtual void ClearWindow(sf::RenderWindow &window);

		void InitActors();
		void DestroyActors();
	};
}

