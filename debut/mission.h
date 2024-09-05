#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>


class mission
{

private:
    
    std::string nbPersonne;
    
    std::string nbHeure;



protected:



public:
    /*Classe sous forme canonique*/
    Entreprise();
    ~Entreprise();
    Entreprise(const Entreprise& entre);
    Entreprise& operator = (const Entreprise& entre);

    Entreprise(std::string nom, std::string ville);
    std::string getNomEntreprise();
    void setEntreprise(std::string nouveauNom);
    std::string getVilleEntreprise();
    void setVilleEntreprise(std::string nouvelleVille);

};

#endif