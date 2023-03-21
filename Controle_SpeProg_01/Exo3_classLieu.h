
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
	std::string  deplacement();
};

#endif