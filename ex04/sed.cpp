#include "sed.hpp"

sed::sed(std::string fileName) {
	this->fileName = fileName;
	return;
}
sed::~sed() {

}
bool sed::checkStrEmpty(std::string s1, std::string s2){
	if (s1.empty() || s2.empty())
		return true;
	return false;
}

bool sed::checkFileExist(std::ifstream &fileStream){
	if(fileStream.is_open())
		return true;
	return false;
}

bool sed::replace(std::string s1, std::string s2){
	std::string line;
	size_t pos = 0;
	int i;
	std::string newFile = fileName;
	std::ifstream fileStream(fileName);
	if (!checkFileExist(fileStream))
		return false;
	for(i = 0;fileName[i] != '\0'; i++)
		newFile[i] = toupper(fileName[i]);
	newFile.append(".replace");
	std::cout<<newFile<<std::endl;
	std::ofstream outputFile(newFile);
	while (getline(fileStream, line)){
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos+= s2.length();
		}
		pos = 0;
		outputFile << line <<std::endl;
	}
	outputFile.close();
	fileStream.close();
	return true;
}

