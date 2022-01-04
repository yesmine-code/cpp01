#include "HumanA.hpp"

HumanA::HumanA(){
	return;
}
HumanA::~HumanA(){
	return;
}

std::string HumanA::getName(void){
	return name;
}

Weapon HumanA::getWeapon(void){
	return weapon;
}

void HumanA::setName(std::string name){
	this->name = name;
	return;
}

void HumanA::setWeapon(Weapon weapon){
	this->weapon = weapon;
	return;
}

void HumanA::attack(){
	std::cout<<getName()<<" attacks with his "<<getWeapon().getType()<<std::endl ;
}

