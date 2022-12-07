#pragma once
#ifndef EMPRUNT_H
#define EMPRUNT_H

#include <iostream>
#include "date.h"
#include "livre.h"

class Emprunt{
private:
	Date _date_emprunt;
	Livre _livre_emprunter;
	std::string _identifiant;
public:
	Emprunt(Date date_emprunt, Livre livre_emprunter, std::string identifiant);
};

#endif