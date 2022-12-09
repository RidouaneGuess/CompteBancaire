#ifndef COMPTEBANCAIRE_HPP
#define COMPTEBANCAIRE_HPP
using namespace std;
class CompteBancaire
{
	protected:
		string NomTitulaire;
		float Solde;
		int NombreEnvoi;
		int NombreRetrait;
	public:
		void InitialiserCompteBancaire(float);
		void AccederSoldeCompteBancaire();
		void CrediterCompteBancaire(float);
	        void DebiterCompteBancaire(float);
		CompteBancaire(string,float);
		virtual void AfficherCompteBancaire();
		CompteBancaire Virement(float,CompteBancaire);
};
#endif

