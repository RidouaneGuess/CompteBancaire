#ifndef COMPTEBANCAIRE_HPP
#define COMPTEBANCAIRE_HPP
class CompteBancaire
{
	private:
		float Solde;
		int NombreEnvoi;
		int NombreRetrait;
	public:
		void InitialiserCompteBancaire(float);
		void AccederSoldeCompteBancaire();
		void CrediterCompteBancaire(float);
	        void DebiterCompteBancaire(float);
		CompteBancaire(float);
		void AfficherCompteBancaire();
		CompteBancaire Virement(float,CompteBancaire);
};
#endif

