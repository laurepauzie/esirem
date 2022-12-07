#include <iostream>
#include "lecteur.h"

//namespace lecteur{

Lecteur::Lecteur(std::string identifiant, std::string nom, std::string prenom, std::vector<long int> liste_ISBN) : _identifiant(identifiant), _nom(nom), _prenom(prenom), _liste_ISBN(liste_ISBN) {
}

std::string Lecteur::get_identifiant() const {
	return _identifiant;
}

std::string Lecteur::get_nom() const {
	return _nom;
}

std::string Lecteur::get_prenom() const {
	return _prenom;
}
std::vector<long int> Lecteur::get_liste_ISBN() const {
	return _liste_ISBN;
}

void Lecteur::add_ISBN(long int ISBN){
	_liste_ISBN.push_back(ISBN);
}
void Lecteur::remove_ISBN(long int ISBN){
	for (std::vector<long int>::iterator it = _liste_ISBN.begin(); it != _liste_ISBN.end();)
    {
        if (*it == ISBN)
            it = _liste_ISBN.erase(it);
        else
            ++it;
    }
}
std::ostream& operator<<(std::ostream& os, const Lecteur& lecteur){
	std::string to_display;
	to_display = lecteur.get_nom() + " " + lecteur.get_prenom();
	to_display += " a pour indentifiant "+ lecteur.get_identifiant() + " et cette personne a emprunté les livres avec l'ISBN suivants: ";
	for(int k=0;k<lecteur.get_liste_ISBN().size();++k){
		to_display += " ," + lecteur.get_liste_ISBN().at(k);
	}
	os << to_display << std::endl;
	return os;
}
//}	