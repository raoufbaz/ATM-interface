
class clsGuichet
{
private:
	string Numero;
	string Compagnie;
	string Adresse;
	string Status;
	float Solde;
	clsListeClient Clients;
public:

	
	void Ouvrir(string Numero, string Compagnie, string Adresse, clsListeClient Clients, string Status, float Solde);
	
	clsListeClient getListeClient();
	
	void RemplirArgent(int montant);
	void Fermer();
	void Afficher();
};

