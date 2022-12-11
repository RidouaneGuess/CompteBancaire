#include "../CompteBancaire/CompteBancaire.hpp"
class CompteJoint :public CompteBancaire
{
	private:
		string Titulaire2;
	public:
		CompteJoint(string,string,float);
		void AfficherCompteBancaire();
		void 
