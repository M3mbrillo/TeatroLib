#include "Identify.h"
using namespace tb;

Identify::Identify()
{
}

Identify::Identify(std::string nameObject)
{
	this->nameObject = nameObject;
}


Identify::~Identify()
{
	this->nameObject = "__no_name__";
}

std::string tb::Identify::getNameObject()
{
	return this->nameObject;
}
