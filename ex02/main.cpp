#include "iostream"

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr;
	std::string &ref = str; //reference must be initialized but could not be NULL like pointers
	ptr = &str;

	std::cout<<"address : "<<&str<< std::endl;
	std::cout<<"the address using stringPTR : "<<ptr<< std::endl;
	std::cout<<"the address using stringREF : "<<&ref<< std::endl;

	std::cout<<"the value using stringPTR : "<<*ptr<< std::endl;
	std::cout<<"the value using stringREF : "<<ref<< std::endl;
}
