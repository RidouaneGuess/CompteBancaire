#include<iostream>
#include<string>
#include "CompteJoint.hpp"
using namespace std;
CompteJoint::CompteJoint(string nom1,string nom2,float som):CompteBancaire(nom1,som)
{
	this->Titulaire2=nom2;
}
void CompteJoint::FaireAction(string nom)
{
	if(nom==Titulaire2 || nom==NomTitulaire)
	{
		float PC{5000};
		int rep;
		cout<<"\nVoullez vous acheter ce PC?\nTapez '1' si oui:"<<endl;
		cin>>rep;
		if(rep==1)
		{
			if(Solde>=PC){
			cout<<"\nFellicitationVous venez d'acheter un PC!"<<endl;
			
			NombreRetrait++;
			}
			else
				cout<<"\nSolde Insuffisant"<<endl;
		}
	}
	else{
		cout<<"\nVous n'avez pas le droit de faire des actions sur le compte, vous ne faites pas parmi les Titulaires!"<<endl;
	}
}




