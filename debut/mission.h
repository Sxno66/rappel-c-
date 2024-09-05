#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>


class mission
{

private:
    
    std::string nbPersonne;
    
    std::string nbHeure;

    std::string descriptifMission;

protected:



public:
    /*Classe sous forme canonique*/
    mission();
    ~mission();
    mission(const mission& entre);
    mission& operator = (const mission& entre);

    mission(std::string nbPersonne, std::string nbHeure; std::string descriptifMission);
    std::string getnbPersonne();
    void setnbPersonne(std::string nombrePersonne);
    std::string getnbHeure();
    void setnbHeure(std::string nombreHeure);

};

#endif