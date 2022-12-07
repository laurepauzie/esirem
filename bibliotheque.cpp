#include "bibliotheque.h"
#include "livre.h"
#include "auteur.h"
#include "lecteur.h"
#include <vector>
#include <iostream>

Bibliotheque::Bibliotheque(std::vector<Livre> livres, std::vector<Auteur> auteurs, std::vector<Lecteur> lecteurs): _livres(livres), _auteurs(auteurs), _lecteurs(lecteurs){

}
std::vector<Livre> Bibliotheque::get_livre(){
	return _livres;
}
std::vector<Auteur> Bibliotheque::get_auteur(){
	return _auteurs;
}
std::vector<Lecteur> Bibliotheque::get_lecteur(){
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
void Bibliotheque::emprunt(Date date_emprunt,Livre& livre_emprunter,Lecteur& lecteur){
	if(livre_emprunter.get_dispo()){
		lecteur.add_ISBN(livre_emprunter.get_ISBN());
		livre_emprunter.add_emprunteur(lecteur.get_identifiant());
		livre_emprunter.set_dispo(false);
	}
	else{
		std::cout << "Le livre demandé n'est pas disponible." << std::endl;
	}
}