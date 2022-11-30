#include <iostream>
#include "date.h"
#include <vector>

class Livre{
private:
	std::string _titre;
	std::string _auteur;
	std::string _langue;
	std::string _genre;
	Date _date_publication;
	int _ISBN;
	std::vector<std::string> _indentifiant;
public:
	Livre(std::string titre,std::string auteur,std::string langue,std::string genre,Date date_publication,int ISBN,std::vector<std::string> indentifiant);
};