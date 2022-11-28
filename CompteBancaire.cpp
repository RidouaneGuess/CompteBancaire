#include<iostream>
#include<string>
#include "CompteBancaire.hpp"
using namespace std;
CompteBancaire::CompteBancaire(float som)         {
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
{                                                         cout<<"\n Le solde du compte est :"<<Solde<<"frc\nLe nombre d'Envoi est:"<<NombreEnvoi<<"Et le nombre de retrait est:"<<NombreRetrait<<endl;
}  
CompteBancaire CompteBancaire::Virement(float som,CompteBancaire C)                                 {                                                         Solde-=som;                                       NombreRetrait++;                                  C.Solde+=som;
	return C;					
}
