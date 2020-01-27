
#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "clsListeClient.h"
#include "clsListeCompte.h"
#include "clsDataSource.h"
#include "clsGuichet.h"
#include "clsClient.h"
#include "clsCompte.h"
#include "clsUtilitaire.h"

using namespace std;
 void clsUtilitaire::AfficherTitre(char* ptrTitre)
{
	char* ptrcourant = ptrTitre;
	cout << "\t \t";
	while (*ptrcourant != '\0')
	{
		cout << (char)toupper(*ptrcourant);
		ptrcourant++;
	}
	cout << endl
		<< "\t \t";
	while (*ptrTitre != '\0')
	{
		cout << "-";
		ptrTitre++;
	}
	cout << endl;
}

 void clsUtilitaire::AfficherSousTitre(char* ptrTitre)
{
	char* ptrcourant = ptrTitre;
	cout << "\t";
	while (*ptrcourant != '\0')
	{
		cout << (char)* ptrcourant;
		ptrcourant++;
	}
	cout << endl
		<< " \t";
	while (*ptrTitre != '\0')
	{
		cout << "-";
		ptrTitre++;
	}
	cout << endl;
}

 void clsUtilitaire::ValiderNIP(clsClient ptrclient) {
	string tmp;
	do
	{
		cout << "entrez votre NIP: ";
		cin >> tmp;
	} while (tmp != ptrclient.getNIP());
}
 int clsUtilitaire::ChoixCompte(clsClient ptrClient) {
	ptrClient.getTousCompte();
	int choix;
	do
	{
		cout << "Choisissez un Compte (1-" << ptrClient.getNombreComptes() << "): ";
		cin >> choix;
	} while (choix > ptrClient.getNombreComptes() || choix < 1);
	system("CLS");
	return choix;

}
 int clsUtilitaire::AfficherMenu() {
	int choix;
	cout << "Choisir votre Transaction \n \n";
	cout << "\t 1 - Pour Deposer \n \t 2 - Pour Retirer \n \t 3 - Pour Consulter \n \t 4 - Quitter \n \n";
	do {
		cout << "Entrez votre choix (1-4): ";
		cin >> choix;
	} while (choix < 1 || choix > 4);
	return choix;
}

