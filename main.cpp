#include<iostream>
#include<string>
#include "CompteBancaire/CompteBancaire.hpp"
#include "CompteCourant/CompteCourant.hpp"
#include "CompteBancaire/CompteBancaire.hpp"
#include "CompteCourant/CompteCourant.hpp"
#include "CompteJoint/CompteJoint.hpp"
#include "CompteTerme/CompteTerme.hpp"
#include "CompteTitre/CompteTitre.hpp"
#include "CompteEpargne/CompteEpargne.hpp"
#include "CompteIndivis/CompteIndivis.hpp"
using namespace std;
int main()
{
	

	CompteTitre c1("Derkariom",10000);
	CompteIndivis c2("Alazi","Ridouane",50000);
	CompteEpargne c3("Alazi",50000);
	c3.AccederSoldeCompteBancaire();
	/*C1.CrediterCompteBancaire(5000);
	CompteBancaire C1("Ridouane",5000.00);
	CompteBancaire C5("Masta",15000.00);
	C1.AfficherCompteBancaire();
	C1.AfficherCompteBancaire();
	CompteCourant C2("Ridmasta",10000);
	C2.AfficherCompteBancaire();
	cout<<"\n\nCompte Couraant!"<<endl;
	CompteCourant C6("Ridmasta",10000);
	C2.AfficherCompteBancaire();
	CompteJoint C3("Ridouane","Alazi",20000);
	C3.FaireAction("Ridouane");
	CompteTerme C4("Ahmed",40000,10);
	C1=C1+C5+C2;
	C1.AccederSoldeCompteBancaire();
	//C4.ToucherArgent();*/
	return 0;
}
