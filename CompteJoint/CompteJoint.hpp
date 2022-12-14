#include "../CompteBancaire/CompteBancaire.hpp"
<<<<<<< HEAD
=======
#ifndef COMPTEJOINT_HPP
#define COMPTEJOINT_HPP
>>>>>>> Masta
class CompteJoint :public CompteBancaire
{
	protected:
		string Titulaire2;
	public:
		CompteJoint(string,string,float);
		void FaireAction(string nom);
};
#endif


