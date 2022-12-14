#include<iostream>
#include<string>
#include "CompteBancaire/CompteBancaire.hpp"
#include "CompteCourant/CompteCourant.hpp"
#include "CompteJoint/CompteJoint.hpp"
#include "CompteTerme/CompteTerme.hpp"
using namespace std;
int main()
{
	CompteBancaire C1("Ridouane",5000.00);
	C1.AfficherCompteBancaire();
	C1.CrediterCompteBancaire(5000);
	C1.AfficherCompteBancaire();
	cout<<"\n\nCompte Couraant!"<<endl;
	CompteCourant C2("Ridmasta",10000);
	C2.AfficherCompteBancaire();
	CompteJoint C3("Ridouane","Alazi",20000);
	C3.FaireAction("Ridouane");
	CompteTerme C4("Ahmed",40000,10);
	C4.ToucherArgent();
	return 0;
}
