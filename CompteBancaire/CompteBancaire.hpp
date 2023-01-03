#ifndef COMPTEBANCAIRE_HPP
#define COMPTEBANCAIRE_HPP
#include<string>
using namespace std;
struct ccompte
{
	//Information de base pour crée un compte
	string Nom;
	string Prenom;
	string Nation;
	double cNum;
	int age;
	int numTel;
	int cCout;
	string localite;
	string type;
};
using utilisateur=struct ccompte;
struct cellule
{
	utilisateur user;
	struct cellule *suiv;
};
typedef cellule *liste;
class CompteBancaire
{
	protected:
		string NomTitulaire;
		float Solde;
		int NombreEnvoi;
		int NombreRetrait;
		static liste users;
	public:
		CompteBancaire(string,float);
		void InitialiserCompteBancaire(float);
		void AccederSoldeCompteBancaire();
		void CrediterCompteBancaire(float);
	    void DebiterCompteBancaire(float);
		CompteBancaire operator+(CompteBancaire);
		void operator=(CompteBancaire);
		virtual void AfficherCompteBancaire();
		CompteBancaire Virement(float,CompteBancaire);
		static void creecompte();
		utilisateur chercherCompte(string Nom,string Prenom,double numCompte);	
};
#endif

