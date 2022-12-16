#include<iostream>
#include<string>
#include"CompteIndivis.hpp"
using namespace std;

CompteIndivis::CompteIndivis(string N1,string N2,float S) : CompteJoint(N1,N2,S)
{

}
void CompteIndivis::FaireAction(string Nom1,string Nom2)
{
    if(Nom1==NomTitulaire && Nom2==Titulaire2)
    {
        CompteJoint::FaireAction(Nom1);
    }
    else
    {
        cout<<"\nVOUS NE POUVEZ PAS FAIRE LES ACTIONS SEUL." <<endl;
    }
}
