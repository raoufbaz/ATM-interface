
class clsListeCompte
{
private:
	vector<clsCompte> maliste;
public:
	int NombreElements();
	void Ajouter(clsCompte Compte);
	

	clsCompte Trouver(int numero);

	void Afficher();
};

