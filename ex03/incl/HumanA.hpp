#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "weapon.hpp"
#include "iostream"

class HumanA{
private:
	std::string name;
	Weapon &weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	Weapon &getWeapon(void) const;
	void setWeapon(Weapon &weapon);
	std::string getName(void);
	void setName(std::string name);
	void attack() const;
};
#endif
