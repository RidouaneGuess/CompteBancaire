#include<iostream>
#include<string>
#include"CompteTitre.hpp"
void CompteTitre::ActionsImmobiliere()
{
    float House{500000};
    if(Solde>=House)
    {
        Solde-=House;
        NombreRetrait++;
        cout<<"\nFELLICITATION!\nVOUS VENEZ D'ACHETER UNE MAISON A "<<House <<"frs" <<endl;
    }
    else
    {
        cout<<"SOLDE INSUFFISANT.\nLA MAISON COUTE "<<House <<"frs\nVOTRE SOLDE EST: " <<Solde <<"frs" <<endl;
    }
}