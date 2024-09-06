#include "mission.h"
#include "entreprise.h"


using namespace std;

int main() {
    Entreprise e1("Clinique Hildebrand", "Brissago");
    std::cout << "Entreprise: " << e1.getNomEntreprise() << ", Ville: " << e1.getVilleEntreprise() << std::endl;

    e1.setEntreprise("Clinique Hildebrand");
    e1.setVilleEntreprise("Brissago");
    std::cout << "Update Entreprise: " << e1.getNomEntreprise() << ", Ville: " << e1.getVilleEntreprise() << std::endl;

    Mission m1("5", "40", "Faire quelque chose");
    std::cout << "Mission: " << m1.getnbPersonne() << " personnes, " << m1.getnbHeure() << " heures, Description: " << m1.getDescription() << std::endl;

    m1.setnbPersonne("10");
    m1.setnbHeure("80");
    m1.setDescription("Developper un nouveau logiciel");
    std::cout << "Updated Mission: " << m1.getnbPersonne() << " personnes, " << m1.getnbHeure() << " heures, Description: " << m1.getDescription() << std::endl;

    return 0;
}
