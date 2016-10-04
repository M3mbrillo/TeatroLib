#pragma once

#include "Scenary.h"

namespace tb {
	class Stage
	{
	private:
		Stage();
		Stage(Stage const&);		
		static Stage* instance;		

		std::vector<Scenary*> scenarys;
		tb::Scenary* currentScenary;

	public:
		static Stage* getInstance();
		static void Destroy();

		tb::Scenary* getCurrentScenary();
		void setCurrentScenary(std::string nameObject);
		void AddScenary(Scenary* scenary);
	};

}