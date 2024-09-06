#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>

class Mission
{
private:
    std::string nbPersonne;
    std::string nbHeure;
    std::string descriptifMission;

protected:

public:
    /*Classe sous forme canonique*/
    Mission();
    ~Mission();
    Mission(const Mission& miss);
    Mission& operator=(const Mission& miss);

    Mission(std::string nbPersonne, std::string nbHeure, std::string Description);
    std::string getnbPersonne();
    void setnbPersonne(std::string nombrePersonne);
    std::string getnbHeure();
    void setnbHeure(std::string nombreHeure);
    std::string getDescription();
    void setDescription(std::string Description);
};

#endif
