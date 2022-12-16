#ifndef COMPTEBANCAIRE_HPP
#define COMPTEBANCAIRE_HPP
#include<string>
using namespace std;
class CompteBancaire
{
	protected:
		string NomTitulaire;
		float Solde;
		int NombreEnvoi;
		int NombreRetrait;
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
};
#endif

