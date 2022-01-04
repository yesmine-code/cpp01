#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "weapon.hpp"
#include "iostream"

class HumanA{
private:
	Weapon weapon;
	std::string name;
public:
	HumanA();
	~HumanA();
	Weapon getWeapon(void);
	void setWeapon(Weapon weapon);
	std::string getName(void);
	void setName(std::string name);
	void attack();
};
#endif
