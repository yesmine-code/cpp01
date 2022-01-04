#include "Zombie.hpp"

Zombie::Zombie(void){
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

void Zombie::set_name(std::string name){
	this->name=name;
	return;
}

Zombie* newZombie( std::string name ){
	Zombie *z = new Zombie();
	z->set_name(name);
	return(z);
}
