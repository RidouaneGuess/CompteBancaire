#include<iostream>
#include<string>
#include"CompteEpargne.hpp"

CompteEpargne::CompteEpargne(string N,float S) : CompteBancaire(N,S)
{
    
}
void CompteEpargne::Protocole()
{
    float montant{50000};
    Solde+=montant;
    NombreEnvoi++;
}