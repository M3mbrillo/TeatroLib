#pragma once
#include <vector>

#include <SFML\Graphics.hpp>

#include "Identify.h"

namespace tb {
	class Actor :
		public Identify
	{
	protected:
		std::vector<sf::Drawable*> drawables;		
		float z_index;

	public:
		Actor();
		Actor(std::string nameObject);		
		~Actor();

		float getZ_Index() const;

		//game loop function
		void Draw(sf::RenderWindow &window);
		virtual void UpdateAfterEvent() = 0;
		virtual void Update(sf::Event evento) = 0;
		virtual void UpdateBeforEvent() = 0;

	};
}