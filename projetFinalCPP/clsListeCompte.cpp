#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "clsCompte.h"
#include "clsListeCompte.h"
using namespace std;
int clsListeCompte::NombreElements() { return maliste.size(); };
void clsListeCompte::Ajouter(clsCompte Compte) { maliste.push_back(Compte); };


clsCompte clsListeCompte::Trouver(int numero) {
	return maliste[numero];

};

void clsListeCompte::Afficher() {

	for (int i = 0; i < maliste.size(); i++)
	{
		cout << i + 1 << ". " << maliste.at(i).getTypeCompte() << endl;
	}
}