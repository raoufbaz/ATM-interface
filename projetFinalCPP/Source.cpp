#include <iostream>
#include "clsGuichet.h"
#include "clsClient.h"
#include "clsDataSource.h"
#include "clsUtilitaire.h"
#include <string>
using namespace std;

int main() {
	clsGuichet Guichet1;
	 Guichet1.Ouvrir("GUICH001", "Desjardins", "MTL", clsDataSource::GetClients("Clients.txt"), "Actif", 1000);
	char titre[] = "banque royale gab";
	char titre2[] = "Guichet Automatique Bancaire";
	
	 clsUtilitaire::AfficherTitre(titre);
	 clsUtilitaire::AfficherSousTitre(titre2);

	 clsClient courant= Guichet1.getListeClient().Trouver();
	 clsUtilitaire::ValiderNIP(courant);
	 courant.setComptes(clsDataSource::GetComptes("Comptes.txt",courant.getNumero()));
	int numeroCompte = clsUtilitaire::ChoixCompte(courant);
	int choix= clsUtilitaire::AfficherMenu();
		switch (choix)
		{
		case 1:
			courant.TrouverCompte(numeroCompte).Deposer();
			courant.TrouverCompte(numeroCompte).Consulter();
			break;
		case 2:
			courant.TrouverCompte(numeroCompte).Retirer();
			courant.TrouverCompte(numeroCompte).Consulter();
			break;
		case 3:
			courant.TrouverCompte(numeroCompte).Consulter();
			
			break;
		case 4:
			break;
		} 
		clsDataSource::UpdateComptes("Comptes.txt", courant.TrouverCompte(numeroCompte).getNumCompte(),courant.TrouverCompte(numeroCompte).getSolde());
	 system("pause");
	return 0;
}


