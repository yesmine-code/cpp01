#include "incl/weapon.hpp"

Weapon::Weapon(std::string type){
	this->type = type;
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

