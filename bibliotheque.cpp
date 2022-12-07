#include "bibliotheque.h"
#include "livre.h"
#include "auteur.h"
#include "lecteur.h"
#include <vector>
#include <iostream>

Bibliotheque::Bibliotheque(std::vector<Livre> livres, std::vector<Auteur> auteurs, std::vector<Lecteur> lecteurs): _livres(livres), _auteurs(auteurs), _lecteurs(lecteurs){

}
std::vector<Livre> Bibliotheque::get_livres(){
	return _livres;
}
std::vector<Auteur> Bibliotheque::get_auteurs(){
	return _auteurs;
}
std::vector<Lecteur> Bibliotheque::get_lecteurs(){
	return _lecteurs;
}
void Bibliotheque::add_lecteur(Lecteur L1){
	_lecteurs.push_back(L1);
}
void Bibliotheque::add_auteur(Auteur A){
	_auteurs.push_back(A);
}
void Bibliotheque::add_livre(Livre L2){
	_livres.push_back(L2);
}