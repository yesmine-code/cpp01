#include "Zombie.hpp"

Zombie::Zombie(std::string name){
    this->name = name;
    return ;
}

Zombie::~Zombie(void){
//	std::cout <<"bye bye "<< name << std::endl;
	return ;
}

std::string    Zombie::get_name(void){
    return(name);
}

void Zombie::announce(void){
    std::cout<< "<" << get_name() << "> " << "BraiiiiiiinnnzzzZ..."<< std::endl;
}


