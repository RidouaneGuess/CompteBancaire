#ifndef COMPTECOURANT_HPP
#define COMPTECOURANT_HPP
#include "../CompteBancaire/CompteBancaire.hpp"
class CompteCourant : public CompteBancaire
{
	private:
		int NombreDepense;
		int NombreFacturePayer;
		int NombreRecevoirSalaire;
		int NombreRecevoirBourseEtude;
		int NombreRecevoirPension;
	public:
		CompteCourant(string,float);
		void PayerFacture();
		void RecevoirSalaire();
		void RecevoirBourseEtude();
		void RecevoirPension();
		void AfficherCompteBancaire();

};
#endif
