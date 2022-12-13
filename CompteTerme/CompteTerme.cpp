#include<iostream>
#include<string>
#include "CompteTerme.hpp"
using namespace std;
CompteTerme::CompteTerme(string nom,float som,int duree):CompteBancaire(nom,som)
{
	this->duree=duree;
}
void CompteTerme::ToucherArgent()
{
	cout<<"\n Votre Compte dure combien de temps?:"<<endl;
	int date;
	cin>>date;
	if(date>=this->duree)
	{
		float som;
		cout<<"Entrez la somme que vous voullez toucher:"<<endl;
		cin>>som;
		if(this->Solde>=som)
		{
			cout<<"\nVous avez:"<<som<<"Frs en poche!"<<endl;
			NombreRetrait++;
			Solde-=som;
		}
		else
			cout<<"\nSolde Insuffisant!"<<endl;
	}
	else{
		if(date<duree)
		{
			cout<<"La durée du contrat n'est pas atteinte!\nSi vous continuez, vous serrez pénalisés de 5 pour cent du montant retiré.(Tapez '1' pour oui)"<<endl;
			int rep;
			cin>>rep;
			if(rep==1)
			{
				float mont;
				cout<<"\nEntrez le montant:"<<endl;
				cin>>mont;
				float pourcent;
                                        pourcent=(Solde*5)/100;
				if(Solde>=mont+pourcent)
				{
					cout<<"\nVous avez:"<<mont<<"Frc En poche ."<<endl;
					NombreRetrait++;
					Solde-=mont;
					Solde-=pourcent;
				}
			}
		}
	}
}

