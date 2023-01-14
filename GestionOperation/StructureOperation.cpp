#include <iostream>
#include <string>
#include "../CompteBancaire/CompteBancaire.hpp"
using namespace std;
void quiter()
{
    exit(0);
}
void CompteCourant:: StructureOperation(string compte, float som)
{
    int operation;
    cout<<"                ***donner le non de l'operation***               \n"<<endl;
    cout<<"                   *** 1.pour payer la facture                ***\n"<<endl;
    cout<<"                   ***----------------------------------------***\n"<<endl;
    cout<<"                   *** 2.pour recevoir le salaire             ***\n"<<endl;
    cout<<"                   ***----------------------------------------***\n"<<endl;
    cout<<"                   *** 3.Pour la RecevoirBourseEtude          ***\n"<<endl;
    cout<<"                   ***----------------------------------------***\n"<<endl;
    cout<<"                   *** 4.Pour recevoire la pension            ***\n"<<endl;
    cout<<"                   ***----------------------------------------***\n"<<endl;
    cout<<"                   *** 5.pour quiter le programme             ***\n"<<endl;
    cout<<"                   ***----------------------------------------***\n"<<endl;
    cin>>operation;
    switch(operation)
    {
        case 1
            PayerFacture();
            cout<<"\n**  identifiant_facture   mois dela facture    date du payement     sodle  **"<<endl;
            cin>> id_facture>>"   ">>mois_facture,>>"  ">>date_payement>>"    ">>sodle;
        break
        case 2
            RecevoirSalaire()
            cout<<"\n**  id du salaire   mois du salaire    date du payement    sodle  **"<<endl;
            cin>> id_salaire>>"   ">>mois_salaire>>"   ">>date_payement>>"    ">>sodle;
        break
        case 3
            RecevoirBourseEtude()
            cout<<"\n**  id de la bourse   annee d'obtention    date_payement     sodle  **"<<endl;
            cin>> id_bourse>>"   ">>annee_obtenu>>"  ">>date_payement>>"    ">>sodle;
        break
        case 4
            RecevoirPension()
            cout<<"\n**  id de la pension   pension du mois    date_payement     sodle  **"<<endl;
            cin>> id_pension>>"   ">>mois_pension>>"  ">>date_payement>>"    ">>sodle;
        break
        case 5
            quiter()
        break
        default
        cout<<"erreur de choix\n"<<endl;
    }
}
void CompteCourant::AfficherCompteBancaire()
{
    cout<<StructureOperation()<<endl;
}