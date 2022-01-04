#include "weapon.hpp"

Weapon::Weapon(){
	return;
}
Weapon::~Weapon(){
	return;
}

std::string Weapon::getType(void){
	std::string &ref = type;
	return ref;
}

void Weapon::setType(std::string type){
	this->type = type;
	return;
}

