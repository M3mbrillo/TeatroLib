#include "Stage.h"

tb::Stage * tb::Stage::instance = nullptr;

tb::Stage::Stage()
{

}

tb::Stage::Stage(Stage const &)
{

}


tb::Stage* tb::Stage::getInstance()
{
	if (Stage::instance == nullptr) {
		Stage::instance = new Stage();
	}
	return Stage::instance;
}

void tb::Stage::Destroy()
{
	if (Stage::instance == nullptr) {
		delete[] Stage::instance;
	}	
}

tb::Scenary * tb::Stage::getCurrentScenary()
{
	return this->currentScenary;
}

void tb::Stage::setCurrentScenary(std::string nameObject)
{
	for (auto item : this->scenarys) {
		if (item->getNameObject() == nameObject) {
			this->currentScenary = item;
		}
	}
}

void tb::Stage::AddScenary(Scenary * scenary)
{
	this->scenarys.push_back(scenary);
}
