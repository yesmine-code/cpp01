#include "Zombie.hpp"

int main (void){
	Zombie *z;
	int i = 0;
	z = zombieHorde(6, "yesmine");
	while(i < 6)
	{
		z->announce();
		i++;
	}
	delete [] z;
}
