
#include <string>
#include "clsDate.h"
using namespace std;
clsDate::clsDate() {};

string clsDate::AfficherDate() { return to_string(Jour) + "/" + to_string(Mois) + "/" + to_string(Annee); }

void clsDate::setDate(string Date) {
	int Jour = stoi(Date.substr(0, 2));
	int Mois = stoi(Date.substr(3, 2));
	int Annee = stoi(Date.substr(6, 4));
	this->Jour = Jour; this->Mois = Mois; this->Annee = Annee;
};