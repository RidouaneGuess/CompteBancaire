#include "../CompteBancaire/CompteBancaire.hpp"
#ifndef COMPTETERME_HPP
#define COMPTETERME_HPP
class CompteTerme : public CompteBancaire
{
	private:
		int duree;
	public:
		CompteTerme(string,float,int);
		void ToucherArgent();
};
#endif