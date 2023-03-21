
#ifndef LIEU_H
#define LIEU_H

#include <string>

class Lieu {

private:
	std::string name;
	std::string desc;
	int difficulty;
	std::string listeLieu[2];

public:
	Lieu();
	Lieu(std::string nom, std::string description, int diff, std::string liste);
	std::string  deplacement();
};

#endif