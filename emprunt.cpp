#include <iostream>
#include "emprunt.h"
#include "date.h"

Emprunt::Emprunt(Date date_emprunt, Livre livre_emprunter, std::string identifiant) : _date_emprunt(date_emprunt), _livre_emprunter(livre_emprunter), _identifiant(identifiant){

}