#include "clsListeClient.h"
#include "clsClient.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;
int clsListeClient::NombreElements() { return maliste.size(); };

void clsListeClient::Ajouter(clsClient Client) { maliste.push_back(Client); };

clsClient clsListeClient::Trouver() {
	string numero;
	int resultat;

	do {
		cout << "Entrez votre numero de compte: ";
		cin >> numero;
		cin.ignore();
		resultat = Existe(numero);

		if (resultat == -1)
		{
			cout << "Le compte n'existe pas" << endl;

		}
		else {
			return maliste.at(resultat);
		}
	} while (resultat == -1);

};

int clsListeClient::Existe(string numero) {
	for (int i = 0; i < maliste.size(); i++)
		if (maliste.at(i).getNumero() == numero)
			return i;
	return -1;
};
string clsListeClient::Afficher() {
	return maliste[0].getNumero();
}
void clsListeClient::AfficherC1() {
	cout << maliste[1].getNumero();
}