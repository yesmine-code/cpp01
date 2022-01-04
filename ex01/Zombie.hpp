#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void announce(void);
	std::string get_name(void);
	void set_name(std::string name);
};
Zombie* zombieHorde( int N, std::string name );
Zombie* newZombie( std::string name );

#endif