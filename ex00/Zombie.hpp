#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>



class Zombie{
private:
    std::string name;  
public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
    std::string get_name(void);
    Zombie* newZombie( std::string name );

};

#endif