#include<iostream>
#include<string>
#include<stdlib.h>
#include "CompteBancaire/CompteBancaire.hpp"
#include "CompteCourant/CompteCourant.hpp"
#include "CompteBancaire/CompteBancaire.hpp"
#include "CompteCourant/CompteCourant.hpp"
#include "CompteJoint/CompteJoint.hpp"
#include "CompteTerme/CompteTerme.hpp"
#include "CompteTitre/CompteTitre.hpp"
#include "CompteEpargne/CompteEpargne.hpp"
#include "CompteIndivis/CompteIndivis.hpp"
void menu(int n);
void menu1();
using namespace std;
int main()
{
	menu1();			

	return 0;
}
void menu(int n)
{
	switch(n)
	{
		case 0:
			cout<<"********************************************************" <<endl;
			cout<<"* UNIVERSITE ABDOU MOUMOUNI DE NIAMEY                  *" <<endl;
			cout<<"* FACULTE DES SCIENCES ET TECHNIQUES                   *" <<endl;
			cout<<"* DEPARTEMENT DE L'INFORMATIQUE                        *" <<endl;
			cout<<"* SECTION L3_INFORMATIQUE                              *" <<endl;
			cout<<"* GROUPE DES VISIONNAIRES                              *" <<endl;
			cout<<"* ANNEE ACADEMIQUE: 22/23                              *" <<endl;
			cout<<"* PROJET: GESTION DES COMPTES BANCAIRES EN C++         *" <<endl;
			cout<<"*		EN UTILISANT GIT                              *" <<endl;
			cout<<"* AUTEURS:                                             *"<<endl;
			cout<<"*           ABOUBACAR HAMIDOU RIDOUANE                 *" <<endl;
			cout<<"*           ISSOUFOU DODO ALAZI                        *" <<endl;
			cout<<"* DATE DE PRESENTATION: 16/12/22                       *" <<endl;
			cout<<"* ******************************************************" <<endl;
		case 1:
			cout<<"\n1. LES BRANCHES DISPONIBLES" <<endl;
			cout<<"\n2. COMMITS DISPONIBLES" <<endl;
			cout<<"\n3. LES  TESTES" <<endl;
		break;
		case 2:
			cout<<"\n1. b1870ab (DEBUT DU PROJET)" <<endl;
			cout<<"\n2. 21626a7 (FINALISATION DU NOYAU)" <<endl;
			cout<<"\n3. 376f447 (RUN)" <<endl;
			cout<<"\n4. 32127cc (FIN DE LA BRANCHE)" <<endl;
			cout<<"\n5. 419f0b1 (DEBUT DE LA BRANCHE)" <<endl;
			cout<<"\n6. 8a2aa4c (FIN DE LA BRANCHE)" <<endl;
			cout<<"\n7. 27206cf (BRACHE FIN)" <<endl;
		break;
		default:
		break;
	}
}
void menu1()
{
	menu(0);
		debut:
		menu(1);
		int choix;
		cin>>choix;
		switch(choix)
		{
			case 1:
				system("git branch");
				goto debut;
			break;
			case 2:
				system("git log --oneline");
				goto debut;
			break;
			case 3:
				debut2:
				int commit;
				menu(2);
				cout<<"VOTRE CHOIX :";
				cin>>commit;
				menu(2);
				switch(commit)
				{
					case 1:
						system("git checkout b1870ab");
						goto debut2;
					break;
					case 2:
						system("git checkout 21626a7");
						goto debut2;
					break;
					case 3:
						system("git checkout 376f447");
						goto debut2;
					break;
					case 4:
						system("git checkout 32127cc");
						goto debut2;
					break;
					case 5:
						system("git checkout 419f0b1");
						goto debut2;
					break;
					case 6:
						system("git checkout 8a2aa4c");
						goto debut2;
					break;
					case 7:
						system("git checkout 27206cf");
						cout<<"MERCI D'AVOIR VISITE CE PROJET"<<endl;
						cout<<"A L'INSTANT VOUS POUVEZ COMPILER LE PROJRT"<<endl;
						system("git checkout master");
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
					break;
				}
			break;
		}
}