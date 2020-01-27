


class clsCompte
{
private:
	string Client;
	string Numero;
	string Type;
	clsDate date;
	double Solde;

public:
	
	void Ouvrir(string Client, string Numero, string Type, clsDate Date, double Solde);
	
	void Deposer();

	void Retirer(); 
	void Consulter(); 
	string getNumCompte();
	string getTypeCompte();
	double getSolde();
};

