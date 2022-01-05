#include "incl/HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	this->weapon = nullptr;
	return;
}

HumanB::~HumanB(){
	return;
}

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
	return;
}

Weapon& HumanB::getWeapon(void)const{
	return (*(this->weapon));
}

void HumanB::attack() const{
	if (weapon == nullptr)
		std::cout<<"Weapon cannot be NULL"<<std::endl;
	else {
		if (weapon->getType().empty())
			std::cout<<"waepon type cannot be empty"<<std::endl;
		else
			std::cout << name << " attacks with his " << weapon->getType() << std::endl;
	}
}