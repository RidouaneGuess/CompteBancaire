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
        cout<<"LE SOLDE DE VOTRE COMPTE EST:"<<Solde<<"Frs"<<endl;
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
	string nom;
	cout<<"\nEntrez le nom du Titulaire:"<<endl;
	cin>> nom;
	CompteBancaire S(nom,0);
	S.Solde=this->Solde+C.Solde;
	return S;
}
void  CompteBancaire::operator=(CompteBancaire S)      {                                                            Solde=S.Solde;
 }
