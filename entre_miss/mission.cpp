#include "mission.h"



using namespace std;



mission::mission() {

    this->nombrePersonnes = "inconnus";
    this->nombreHeures = "inconnues";
    this->description = "inconnue";

}


mission::mission(std::string personnes, std::string heure, std::string description) {
    this->nombrePersonnes = personnes;

    this->nombreHeures = heure;

    this->description = description;
}



mission::~mission() {

    cout << "Destruction de la mission " << this->nombrePersonnes << " " << this->nombreHeures << " " << this->description << endl;

}


mission::mission(const mission& miss)
{
    cout << "Copie de Capitaine" << endl;
    this->nombrePersonnes = miss.nombrePersonnes;
    this->nombreHeures = miss.nombreHeures;
    this->description = miss.description;

}


mission& mission::operator = (const mission& miss)
{
    cout << "Affectation de l'entreprise" << std::endl;
    if (this != &miss)  
    {
        this->nombrePersonnes = miss.nombrePersonnes;
        this->nombreHeures = miss.nombreHeures;
        this->description = miss.description;
    }
    return *this;
}


std::string mission::getNomEntreprise()
{
    return this->nomEntreprise;
}


void Entreprise::setEntreprise(std::string nouveauNom) {
    this->nomEntreprise = nouveauNom;
}

std::string Entreprise::getVilleEntreprise() {
    return this->villeEntreprise;
}



void  Entreprise::setVilleEntreprise(std::string nouvelleVille) {
    this->villeEntreprise = nouvelleVille;
}
