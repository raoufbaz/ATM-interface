#include "clsCompte.h"

#include <string>
#include <iostream>
#include "clsDate.h"
using namespace std;

void clsCompte::Ouvrir(string Client, string Numero, string Type, clsDate Date, double Solde) {
	this->Client = Client; this->Numero = Numero; this->Type = Type; this->date = Date; this->Solde = Solde;
}

void clsCompte::Deposer() {
	int montant;
	do
	{
		cout << "Entrez le montant pour Depot : ";
		cin >> montant;
	} while (montant < 2 || montant > 20000);
	this->Solde += montant;
	cout << "--- Transaction Reussie ---" << endl;

	system("pause");
	system("CLS");
}

void clsCompte::Retirer() {
	int montant;
	do
	{
		cout << "Entrez montant pour retrait : ";
		cin >> montant;
	} while (montant > 500 || montant < 20 || montant % 20 || montant >= this->Solde);
	this->Solde -= montant;
	cout << "--- Transaction Reussie ---" << endl;


	system("pause");
	system("CLS");
}

void clsCompte::Consulter() {
	cout << "Les infos du compte :" << endl;
	cout << "\t Numero : " << this->Numero << endl;
	cout << "\t Client : " << this->Client << endl;
	cout << "\t Type : " << this->Type << endl;
	cout << "\t Date Creation : " << this->date.AfficherDate() << endl;
	cout << "\t Solde : " << this->Solde << endl;

}

string clsCompte::getNumCompte() { return Numero; };
string clsCompte::getTypeCompte() { return Type; };
double clsCompte::getSolde() { return Solde; };