#include "clsGuichet.h"

#include <iostream>
#include <string>
#include "clsListeClient.h"
using namespace std;

void  clsGuichet::Ouvrir(string Numero, string Compagnie, string Adresse, clsListeClient Clients, string Status, float Solde) {
	this->Numero = Numero; this->Compagnie = Compagnie; this->Adresse = Adresse;
	this->Status = Status; this->Solde = Solde; this->Clients = Clients;
}

clsListeClient clsGuichet::getListeClient() { return Clients; }

void clsGuichet::RemplirArgent(int montant) {
	Solde += montant;
};
void clsGuichet::Fermer() {
	Status = "Inactif";
};
void clsGuichet::Afficher() {
	cout << "Les infos du Guichet :" << endl;
	cout << "\t Numero : " << this->Numero << endl;
	cout << "\t Compagnie : " << this->Compagnie << endl;
	cout << "\t Adresse : " << this->Adresse << endl;
	cout << "\t Status : " << this->Status << endl;
	cout << "\t Solde : " << this->Solde << endl;
}