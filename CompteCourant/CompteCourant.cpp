#include <iostream>
#include <string>
#include "CompteCourant.hpp"
using namespace std;
CompteCourant::CompteCourant(string nom,float som) : CompteBancaire(nom,som)
{

          NombreDepense=0;                                  NombreFacturePayer=0;                             NombreRecevoirSalaire=0;                          NombreRecevoirBourseEtude=0;                      NombreRecevoirPension=0;
}
void CompteCourant::PayerFacture()
{
        float montant;
        cout<<"Entrez le montant Net à payer:"<<endl;
        cin>>montant;
        if(Solde>=montant)
        {
                Solde-=montant;
                NombreDepense++;
                NombreFacturePayer++;
                cout<<"\nLe paiement a été éffectué avec succès!"<<endl;
        }
        else
                cout<<"Le solde de votre compte est insuffisant."<<endl;
}
void CompteCourant::RecevoirSalaire()
{
        int salaire{300000};
        cout<<"Votre salaire est:"<<salaire<<"Frc"<<endl;
        cout<<"\nCe mois est en qell'iéme jour?"<<endl;
	int jour;
        cin>>jour;
        if(jour>=25 && jour<32)
        {
                Solde+=salaire;
                NombreRecevoirSalaire++;
                NombreEnvoi++;
                cout<<"\nVotre salaire est viré dans votre compte"<<endl;
        }
        else
        {
                if(jour>0&&jour<25)
                        cout<<"\nSoyez patient,il n'est pas encore fin du mois!"<<endl;
                else{
                        if(jour<1||jour>31)
                                cout<<"\nMois invalide!"<<endl;
                }
        }
}
void CompteCourant::RecevoirBourseEtude()
{
        int moy;
        cout<<"Entrez Ta moyenne annuelle:"<<endl;
        cin>>moy;
        if(moy>=10 && moy<20)
        {
                cout<<"\nDans quelle institution, voudriez vous poursuivre vos etudes?"<<endl;
                string institu;
                cin>>institu;
                cout<<"\nQuelle est votre filiére?"<<endl;
                string fili;
                cin>>fili;
                cout<<"\n\nFéllicitation, vous êtes autorisé à poursuivre vos etudes à "<<institu;
                NombreRecevoirBourseEtude++;
        }
        else
                cout<<"\nVotre moyenne est insuffisante pour avoir une bourse d'étude!"<<endl;
}
void CompteCourant::RecevoirPension()
{
        cout<<"Votre derniére pension date combien de mois"<<endl;
        int dat;
        int pension{100000};
        cin>>dat;
        if(dat>=0)
        {
                cout<<"Votre pension a bien été viré dans votre compte!"<<endl;
                NombreRecevoirPension++;
                Solde+=pension;
        }
        else{
                if(dat<3)
                        cout<<"\nSoyez patient , la pension se prend de 3mois  en 3mois!"<<endl;
        }
}	
void CompteCourant::AfficherCompteBancaire()
{
	CompteBancaire::AfficherCompteBancaire();
       cout<<"\nLe nombre total des depenses est:"<<NombreDepense<<endl;                                  cout<<"\nLe nombre total de paiement de facture est:"<<NombreFacturePayer<<endl;                    cout<<"\nLe nombre total de Recevoir Salaire est :"<<NombreRecevoirSalaire<<endl;                   cout<<"\nLe nombre total de Recevoir Bourse d'Etude est :"<<NombreRecevoirBourseEtude<<endl;        cout<<"\nLe nombre total de Recevoir de Pension est :"<< NombreRecevoirPension<<endl;
}
