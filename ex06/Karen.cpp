#include "Karen.hpp"

Karen::Karen() {

}

Karen::~Karen() {

}

bool Karen::compareIgnoreCase(std::string s1, std::string s2){
	int i;
	i = 0;
	if (s1.length() != s2.length())
		return false;
	while (s1[i] != '\0' && s2[i] != '\0'){
		if (toupper(s1[i]) != toupper(s2[i]))
			return false;
		i++;
	}
	return true;
}

int Karen::getLevelId(std::string level){
	int i;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < 4; i++){
		if (compareIgnoreCase(level, levels[i]))
			return i;
	}
	return -1;
}

void Karen::complain( std::string level ){
	int id = getLevelId(level);
	while (id < 4){
		switch (id) {
			case 0:
				debug();
				break;
			case 1:
				info();
				break;
			case 2:
				warning();
				break;
			case 3:
				error();
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				return;
		}
		id++;
	}
}

void Karen::debug( void ){
	std::cout<<"[ DEBUG ]"<<std::endl;
	std::cout <<"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"<<std::endl;
}

void Karen::info( void ){
	std::cout<<"[ INFO ]"<<std::endl;
	std::cout<<"I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" <<std::endl;
}

void Karen::warning( void ){
	std::cout<<"[ WARNING ]"<<std::endl;
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." <<std::endl;
}

void Karen::error( void ){
	std::cout<<"[ ERROR ]"<<std::endl;
	std::cout<<"This is unacceptable, I want to speak to the manager now."<<std::endl;
}