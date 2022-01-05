#include "incl/HumanA.hpp"
#include "incl/weapon.hpp"
HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	return;
}
HumanA::~HumanA(){
	return;
}

std::string HumanA::getName(void){
	return name;
}

Weapon &HumanA::getWeapon(void) const{
	return weapon;
}

void HumanA::attack() const{
	if (weapon.getType().empty())
		std::cout<<"waepon type cannot be empty"<<std::endl;
	else
		std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

