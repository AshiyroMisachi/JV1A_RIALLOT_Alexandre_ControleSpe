
#ifndef LIEU_CPP
#define LIEU_CPP

#include "Exo3_classLieu.h"
#include <iostream>
Lieu::Lieu() : name(" "), desc(" "), difficulty(0), listeLieu{} {}
Lieu::Lieu(std::string nom, std::string description, int diff, std::string liste) : name(nom), desc(description), difficulty(diff), listeLieu{liste} {}


std::string Lieu::deplacement() {
	std::string choix = "";
	std::cout << "Vers ou allez vous ?" << listeLieu[0] << " " << listeLieu[1] << std::endl;
	std::cin >> choix ;
	return choix;
}

#endif