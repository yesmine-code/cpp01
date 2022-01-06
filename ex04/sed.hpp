#ifndef SED_HPP
#define SED_HPP

# include <iostream>
# include <fstream>
# include <cstring>
# include <string>

class sed{
private:
	std::string fileName;
	bool checkFileExist(std::ifstream &fileStream);
public:
	sed(std::string fileName);
	~sed();
	bool checkStrEmpty(std::string strToFind, std::string strToReplace);
	bool replace(std::string s1, std::string s2);
};

#endif