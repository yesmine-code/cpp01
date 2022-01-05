#include "incl/HumanA.hpp"
#include "incl/HumanB.hpp"

int main(void ) {
	Weapon weapon1("gun");
	HumanA human1("yesmine", weapon1);
	human1.attack();

	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	Weapon club2 = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club2);
	jim.attack();
	club2.setType("some other type of club");
	jim.attack();
}
