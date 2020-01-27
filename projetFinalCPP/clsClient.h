
class clsClient
{
private:
	string Numero;
	string Nom;
	string NIP;
	clsListeCompte Comptes;
	string Status;
public:
	string getNumero();
	string getNIP();

	void setComptes(clsListeCompte liste);

	void Ouvrir(string Numero, string Nom, string NIP, string Status);
	clsCompte TrouverCompte(int numero);
	void getTousCompte();

	int getNombreComptes();

};
