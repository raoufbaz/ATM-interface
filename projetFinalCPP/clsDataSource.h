
class clsDataSource
{
public:
	static	clsListeClient GetClients(string path);

	static	clsListeCompte GetComptes(string path, string Numero);

	static	void UpdateComptes(string path, string NumeroCompte, double Montant);
};


