#pragma once
#include <string>
#include "clsListeCompte.h"
#include "clsClient.h"
#include "clsCompte.h"
using namespace std;

string clsClient::getNumero() { return Numero; };
string clsClient::getNIP() { return NIP; };

void clsClient::setComptes(clsListeCompte liste) { this->Comptes = liste; };

void clsClient::Ouvrir(string Numero, string Nom, string NIP, string Status) {
	this->Numero = Numero; this->Nom = Nom; this->NIP = NIP; this->Status = Status;
};
clsCompte clsClient::TrouverCompte(int numero) {
	return Comptes.Trouver(numero - 1);
}
void clsClient::getTousCompte() {
	Comptes.Afficher();
}
int clsClient::getNombreComptes() {
	return Comptes.NombreElements();
};