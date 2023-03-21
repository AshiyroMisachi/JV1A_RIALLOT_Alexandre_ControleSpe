#include <iostream>
#include "Exo3_classLieu.h"

int main()
{
    std::string currentLocation = "";
    std::string choix = "";
    std::cout << "test" << std::endl;
    Lieu * foret = new Lieu("Foret", "Sombre et lugubre", 5, { "Cite", "Montagne" });
    Lieu * cite = new Lieu("Cite", "Rempli de gens bizarres", 8, { "Foret", "Montagne" });
    Lieu * montange = new Lieu("Montange", "Vide et venteux", 12, { "Cite", "Foret" });
    currentLocation = foret;
    choix = currentLocation->deplacement();
    if (choix == "Cite") {
        currentLocation = cite;
    }
    else if (choix == "Montange") {
        currentLocation = montange;
    }
    else if (choix == "Foret") {
        currentLocation = foret;
    }

    return 0;
}
