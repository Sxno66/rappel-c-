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
    mission(const mission& miss);
    mission& operator = (const mission& miss);

    mission(std::string nbPersonne, std::string nbHeure; std::string Description);
    std::string getnbPersonne();
    void setnbPersonne(std::string nombrePersonne);
    std::string getnbHeure();
    void setnbHeure(std::string nombreHeure);
    std::string getDescription();
    void setDescription(std::string Description);

};

#endif