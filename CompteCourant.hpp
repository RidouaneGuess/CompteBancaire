#ifndef COMPTECOURANT_HPP
#define COMPTECOURANT_HPP
#include "CompteBancaire.hpp"
class CompteCourant : class CompteBancaire
{
	private:
		int NombreDepense;
		int NombrePayerFacture;
		int NombreRecevoirSalaire;
		int NombreRecevoirBourseEtude;
		int NombreRecevoirPension;
	public:
		CompteCourant(string,float,int,int,int,int,int,int,int);
		void PayerFacture();
		void RecevoirSalaire();
		void RecevoirBourseEtude();
		void RecevoirPension();

};
#endif
