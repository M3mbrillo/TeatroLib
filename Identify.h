#pragma once

#include <stdlib.h>
#include <string>

namespace tb {
	class Identify
	{
	private:
		std::string nameObject;

	public:
		Identify();
		Identify(std::string nameObject);
		~Identify();

		std::string getNameObject();
	};
}