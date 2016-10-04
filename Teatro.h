#pragma once

#include <SFML\Graphics.hpp>

#include "Stage.h"

namespace tb {

	class Teatro
	{
	private:		
		sf::RenderWindow window;		
		std::vector<sf::Event> lastEvents;
		Stage* stage;

		void Draw();
		void Update();
		void VerifyScene();	

	public:
		Teatro(int width, int heigth, std::string title);
		~Teatro();

		void StartGame();
	};
}