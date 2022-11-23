#include<iostream>
#include<string>
class CompteBancaire
{
	private:
		float Solde;
	public:
		void InitialiserCompteBancaire(float);
		void AccederSoldeCompteBancaire();
		void CrediterCompteBancaire(float);
	        void DebiterCompteBancaire(float);
		CompteBancaire(float);
		void AfficherCompteBancaire();
		CompteBancaire Virement(float);
};
