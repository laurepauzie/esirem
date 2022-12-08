#include <iostream>
#include "auteur.h"
#include "date.h"

Auteur::Auteur(std::string identifiant_auteur, std::string nom, std::string prenom, Date date_naissance) : _identifiant_auteur(identifiant_auteur), _nom(nom), _prenom(prenom), _date_naissance(date_naissance){
}
std::string Auteur::get_identifiant_auteur()  const {
	return _identifiant_auteur;
}
std::string Auteur::get_nom() const {		
	return _nom;
}
std::string Auteur::get_prenom() const {
	return _prenom;
}
Date Auteur::get_date_naissance() const {
	return _date_naissance;
}