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
	std::vector<std::string> _liste_emprunteur;
public:
	Livre(std::string titre,std::string auteur,std::string langue,std::string genre,Date date_publication,int ISBN,std::vector<std::string> liste_emprunteur);
	std::string get_titre();
	std::string get_auteur();
	std::string get_langue();
	std::string get_genre();
	Date get_date_publication();
	int get_ISBN();
	std::vector<std::string> get_liste_emprunteur();
};