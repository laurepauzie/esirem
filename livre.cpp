#include "livre.h"
#include "auteur.h"
#include <vector>

Livre::Livre(std::string titre,Auteur auteur,std::string langue,std::string genre,Date date_publication,long int ISBN,std::vector<std::string> liste_emprunteur,bool dispo) : _titre(titre), _auteur(auteur), _langue(langue), _genre(genre), _date_publication(date_publication), _ISBN(ISBN), _liste_emprunteur(liste_emprunteur), _dispo(dispo){
}

std::string Livre::get_titre() const {
	return _titre;
}
Auteur Livre::get_auteur() const {
	return _auteur;
}
std::string Livre::get_langue() const {
	return _langue;
}
std::string Livre::get_genre() const {
	return _genre;
}
Date Livre::get_date_publication() const {
	return _date_publication;
}
long int Livre::get_ISBN() const {
	return _ISBN;
}
std::vector<std::string> Livre::get_liste_emprunteur() const {
	return _liste_emprunteur;
}
bool Livre::get_dispo() const {
	return _dispo;
}
void Livre::set_dispo(bool a){
	_dispo = a;
}
void Livre::add_emprunteur(std::string identifiant){
	_liste_emprunteur.push_back(identifiant);
}