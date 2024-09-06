#include "mission.h"

using namespace std;

Mission::Mission() {
    this->nbPersonne = "inconnus";
    this->nbHeure = "inconnues";
    this->descriptifMission = "inconnue";
}

Mission::Mission(std::string personnes, std::string heure, std::string description) {
    this->nbPersonne = personnes;
    this->nbHeure = heure;
    this->descriptifMission = description;
}

Mission::~Mission() {
    cout << "Destruction de la mission " << this->nbPersonne << " " << this->nbHeure << " " << this->descriptifMission << endl;
}

Mission::Mission(const Mission& miss) {
    cout << "Copie de la mission" << endl;
    this->nbPersonne = miss.nbPersonne;
    this->nbHeure = miss.nbHeure;
    this->descriptifMission = miss.descriptifMission;
}

Mission& Mission::operator=(const Mission& miss) {
    cout << "Affectation de la mission" << std::endl;
    if (this != &miss) {
        this->nbPersonne = miss.nbPersonne;
        this->nbHeure = miss.nbHeure;
        this->descriptifMission = miss.descriptifMission;
    }
    return *this;
}

std::string Mission::getnbPersonne() {
    return this->nbPersonne;
}

void Mission::setnbPersonne(std::string nombrePersonne) {
    this->nbPersonne = nombrePersonne;
}

std::string Mission::getnbHeure() {
    return this->nbHeure;
}

void Mission::setnbHeure(std::string nombreHeure) {
    this->nbHeure = nombreHeure;
}

std::string Mission::getDescription() {
    return this->descriptifMission;
}

void Mission::setDescription(std::string description) {
    this->descriptifMission = description;
}
