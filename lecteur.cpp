#include "lecteur.h"

//namespace lecteur{

Lecteur::Lecteur(std::string identifiant, std::string nom, std::string prenom, std::vector<long int> liste_ISBN) : _identifiant(identifiant), _nom(nom), _prenom(prenom), _liste_ISBN(liste_ISBN) {
}

std::string Lecteur::get_identifiant(){
	return _identifiant;
}

std::string Lecteur::get_nom(){
	return _nom;
}

std::string Lecteur::get_prenom(){
	return _prenom;
}
std::vector<long int> Lecteur::get_liste_ISBN(){
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
//}	