#include "../CompteBancaire/CompteBancaire.hpp"
#ifndef COMPTETERME_HPP
#define COMPTETERME_HPP
class CompteTerme:public CompteBancaire.hpp
{
	private:
		int duree;
	public:
		CompteTerme(string,float,int);
		void ToucherArgent();
};
