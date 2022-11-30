#include "date.h"


class Emprunt{
private:
	Date _date_emprunt;
	long int _ISBN;
	std::string _identifiant;
public:
	Emprunt(Date date_emprunt, long int ISBN, std::string identifiant);
	
};