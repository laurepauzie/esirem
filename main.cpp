#include <iostream>
#include <vector>
#include "livre.h"

int main()
{
	std::vector<std::string> emprunteur = {"lchapus","lpauzie"};
	Date d(17,5,1892);
	Livre l1("Les Misérables","Victor Hugo","Français","Roman",d,9780453009669,emprunteur);
	std::cout << l1.get_titre() << std::endl;
	return 0;
}