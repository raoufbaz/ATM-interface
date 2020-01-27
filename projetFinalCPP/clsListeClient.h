

class clsListeClient
{
private:
	vector<clsClient> maliste;
public:
	int NombreElements() ;
	
	void Ajouter(clsClient Client);
	
	clsClient Trouver();
	
	int Existe(string numero);
		string Afficher();
		void AfficherC1();
};