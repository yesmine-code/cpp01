#include "sed.hpp"

int main(int ac, char **av){
	if (ac != 4){
		std::cout<<"wrong argument number"<<std::endl;
		return 0;
	}
	sed r(av[1]);
	if (r.checkStrEmpty(av[2], av[3])) {
		std::cout << "s1 and s2 could not be empty" << std::endl;
		return 0;
	}
	if (! r.replace(av[2], av[3])) {
		std::cout << "Unable to open file" << std::endl;
		return 0;
	}
	return 1;
}