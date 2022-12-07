#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include "livre.h"
#include "auteur.h"
#include "lecteur.h"
#include <vector>
#include <iostream>

class Bibliotheque{
private:
	std::vector<Livre> _livres;
	std::vector<Auteur> _auteurs;
	std::vector<Lecteur> _lecteurs;
public:
	Bibliotheque(std::vector<Livre> livres, std::vector<Auteur> auteurs, std::vector<Lecteur::Lecteur> lecteurs);
	void add_lecteur(Lecteur L1);
	void add_auteur(Auteur A);
	void add_livre(Livre L2);
	std::vector<Livre> get_livres();
	std::vector<Auteur> get_auteurs();
	std::vector<Lecteur> get_lecteurs();
};

#endif