#ifndef HUMANB_HPP
#define HUMANB_HPP
# include "iostream"
# include "weapon.hpp"

class HumanB{
	private:
		Weapon *weapon;
		std::string name;
	public:
		HumanB(std::string name);
		~HumanB();
		Weapon &getWeapon(void) const;
		void setWeapon(Weapon &weapon);
		void attack() const;
};

#endif
