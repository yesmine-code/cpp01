#include "Zombie.hpp"

Zombie::Zombie(std::string name){
    this->name = name;
    return ;
}

Zombie::~Zombie(void){
    return ;
}

std::string    Zombie::get_name(void){
    return(name);
}

void Zombie::announce(void){
    std::cout<< "<" << get_name() << "> " << "BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie* Zombie::newZombie( std::string name ){
    Zombie *z = new Zombie(name);
    name = z->get_name();
    return(z);
}