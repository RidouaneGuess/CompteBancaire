#include<iostream>
#include<string>
#include "CompteBancaire.hpp"
using namespace std;
CompteBancaire::CompteBancaire(string nom,float som)     
{
	NomTitulaire=nom;
        Solde=som;                                        NombreEnvoi=0;                                    NombreRetrait=0;
}                                                 void CompteBancaire::InitialiserCompteBancaire(float s)                                             {                                                         Solde=s;                                  }
void CompteBancaire::AccederSoldeCompteBancaire()
{
        cout<<"Accès réussi."<<endl;
}                                                 void CompteBancaire::CrediterCompteBancaire(float
mont)
{
        Solde+=mont;
        NombreEnvoi++;
}
void CompteBancaire::DebiterCompteBancaire(float som)
{                                                         Solde-=som;
        NombreRetrait++;
}
void CompteBancaire::AfficherCompteBancaire()
{                                                         cout<<"\n Le Titulaire est:"<<NomTitulaire<<"\nLe solde du compte est :"<<Solde<<"frc\nLe nombre d'Envoi est:"<<NombreEnvoi<<"\nEt le nombre de retrait est:"<<NombreRetrait<<endl;
}  
CompteBancaire CompteBancaire::Virement(float som,CompteBancaire C)                                 {                                                         Solde-=som;                                       NombreRetrait++;                                  C.Solde+=som;
	return C;					
}
CompteBancaire CompteBancaire::operator+(CompteBancaire C)
{
	cout<<"\nEntrez le nom du Titulaire:"<<endl;
	cin>>string nom;
	CompteBancaire S(nom,0);
	S.Solde=this->Solde+C.Solde;
	return S;
}
CompteBancaire CompteBancaire::operator=()             {                                                             cout<<"\nEntrez le nom du Titulaire:"<<endl;          cin>>string nom;                                      CompteBancaire S(nom,0);                              S.Solde=this->Solde;
        return S;                                     }
