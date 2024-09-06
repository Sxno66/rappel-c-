#include "entreprise.h"

using namespace std;

/**
 * \brief Constructeur par défaut
 * \li Nom = anonyme
 * \li Ville = inconnu
 */
Entreprise::Entreprise() {
    this->nomEntreprise = "anonyme";
    this->villeEntreprise = "inconnu";
}

/**
 * \brief Constructeur avec paramètres
 *
 * \param nom Nom de l'entreprise
 * \param ville Ville de l'entreprise
 */
Entreprise::Entreprise(std::string nom, std::string ville) {
    this->nomEntreprise = nom;
    this->villeEntreprise = ville;
}

/**
 * \brief Destructeur
 */
Entreprise::~Entreprise() {
    cout << "Destruction de l'entreprise " << this->nomEntreprise << " " << this->villeEntreprise << endl;
}

/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type Entreprise
 */
Entreprise::Entreprise(const Entreprise& entre) {
    cout << "Copie de l'entreprise" << endl;
    this->nomEntreprise = entre.nomEntreprise;
    this->villeEntreprise = entre.villeEntreprise;
}

/**
 * \brief Opérateur d'affectation
 *
 * \param entre Objet de type Entreprise
 * \return Référence à l'objet Entreprise
 */
Entreprise& Entreprise::operator=(const Entreprise& entre) {
    cout << "Affectation de l'entreprise" << std::endl;
    if (this != &entre) {  // Pour éviter l'auto-affectation
        this->nomEntreprise = entre.nomEntreprise;
        this->villeEntreprise = entre.villeEntreprise;
    }
    return *this;
}

/**
 * \brief Accesseur de l'attribut nomEntreprise
 *
 * \return Nom de l'entreprise
 */
std::string Entreprise::getNomEntreprise() {
    return this->nomEntreprise;
}

/**
 * \brief Mutateur de l'attribut nomEntreprise
 *
 * \param nouveauNom Nouveau nom de l'entreprise
 */
void Entreprise::setEntreprise(std::string nouveauNom) {
    this->nomEntreprise = nouveauNom;
}

/**
 * \brief Accesseur de l'attribut villeEntreprise
 *
 * \return Ville de l'entreprise
 */
std::string Entreprise::getVilleEntreprise() {
    return this->villeEntreprise;
}

/**
 * \brief Mutateur de l'attribut villeEntreprise
 *
 * \param nouvelleVille Nouvelle ville de l'entreprise
 */
void Entreprise::setVilleEntreprise(std::string nouvelleVille) {
    this->villeEntreprise = nouvelleVille;
}
