#include "../CompteBancaire/CompteBancaire.hpp"
#ifndef COMPTEJOINT_HPP
#define COMPTEJOINT_HPP
class CompteJoint :public CompteBancaire
{
	protected:
		string Titulaire2;
	public:
		CompteJoint(string,string,float);
		virtual void FaireAction(string nom);
};
#endif


