

#include "clsClient.h"
#include "clsCompte.h"
#include "clsListeClient.h"
#include "clsListeCompte.h"
#include <string>
#include <iostream>
#include <fstream>
#include "clsDate.h"
#include <vector>
#include "clsDataSource.h"
using namespace std;

	clsListeClient clsDataSource::GetClients(string path) {
	clsListeClient ListeClients;
	clsClient tmp;
	string content;
	ifstream file(path);
	string Numero, Nom, NIP, Status;
	int i = 0;
	while (getline(file, content))
		if (i == 0) {
			Numero = content;
			i++;
		}
		else if (i == 1) {
			Nom = content;
			i++;
		}
		else if (i == 2) {
			NIP = content;
			i++;
		}
		else if (i == 3) {
			Status = content;
			tmp.Ouvrir(Numero, Nom, NIP, Status);
			ListeClients.Ajouter(tmp);
			i = 0;
		}
	return ListeClients;
}

	clsListeCompte clsDataSource::GetComptes(string path, string Numero) {
	clsListeCompte ListeCompte;
	clsCompte compte;
	string content;
	ifstream file(path);
	string numClient, numCompte, typeCompte;
	clsDate dateCreation;

	double soldeCompte;
	int i = 0;
	while (getline(file, content))
		if (content == Numero)
		{
			numClient = content;
			i++;
		}
		else if (i == 1)
		{
			numCompte = content;
			i++;
		}
		else if (i == 2)
		{
			typeCompte = content;
			i++;
		}
		else if (i == 3)
		{
			dateCreation.setDate(content);
			i++;
		}
		else if (i == 4)
		{
			soldeCompte = stod(content);
			compte.Ouvrir(numClient, numCompte, typeCompte, dateCreation, soldeCompte);
			ListeCompte.Ajouter(compte);
			i = 0;
		}
	return ListeCompte;
};

	void clsDataSource::UpdateComptes(string path, string NumeroCompte, double Montant) {
	fstream file(path);
	file.open(path, ios::out | ios::in);
	string content;
	int i;
	int valide = 0;
	while (getline(file, content)) {
		if (content == NumeroCompte) {
			int i = 0;
			valide = 1;
		}
		else if (i = 3 && valide == 1)
		{
			file << float(Montant);
		}
		else
		{
			i++;
		}
	}


	file.close();
};