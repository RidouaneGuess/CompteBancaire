#include <iostream>
#include "MaFenetre.hpp"
#include "../CompteIndivis/CompteIndivis.hpp"
using namespace std;
MaFenetre::MaFenetre()
{
    fixed = new Fixed[3];
    button = new Button[6];
    entry = new Entry[8];
    Cbutton = new CheckButton[1];
    ListeBancaire = new ComboBoxText[1];
    label = new Label[4];
    set_title("VisioBancaire");
    resize(600,300);
    set_position(WIN_POS_CENTER);
    add(*fixed);

    //Choix
    button->set_label("J' ai un compte");
    button[1].set_label("Creer un compte");
    fixed->put(*button,120,120);
    fixed->put(button[1],350,120);
    button->signal_clicked().connect([this](){Login();});
    fixed->show_all();

    //Login
    button[2].set_label("<-");
    button[3].set_label("Connecter");
    entry->set_placeholder_text("Votre nom");
    entry->set_alignment(ALIGN_CENTER);
    entry[1].set_placeholder_text("Mot de passe");
    entry[1].set_alignment(ALIGN_CENTER);
    entry[1].set_visibility(false);
    Cbutton->set_label("Afficher le mot de passe");
    Cbutton->set_can_focus(false);
    Cbutton->set_active(false);
    fixed[1].put(*entry,220,70);
    fixed[1].put(entry[1],220,120);
    fixed[1].put(button[2],0,0);
    fixed[1].put(button[3],250,210);
    fixed[1].put(*Cbutton,210,170);
    fixed[1].show_all();
    button[2].signal_clicked().connect([this](){Choix();});
    Cbutton->signal_toggled().connect([this](){AfficherPasse();});

    //CreeCompte
    button[4].set_label("<-");
    entry[2].set_placeholder_text("Votre nom");
    entry[2].set_alignment(ALIGN_CENTER);
    entry[3].set_placeholder_text("Votre prenom");
    entry[3].set_alignment(ALIGN_CENTER);
    entry[4].set_placeholder_text("Mot de passe");
    entry[4].set_alignment(ALIGN_CENTER);
    entry[4].set_visibility(false);
    entry[5].set_placeholder_text("Confirmer");
    entry[5].set_alignment(ALIGN_CENTER);
    entry[5].set_visibility(false);
    ListeBancaire->append("Indivis");
    ListeBancaire->append("Titre");
    ListeBancaire->append("Courant");
    ListeBancaire->append("Joint");
    ListeBancaire->append("Epargne");
    ListeBancaire->append("Terme");
    button[5].set_label("Envoyer");
    fixed[2].put(button[4],0,0);
    fixed[2].put(entry[2],220,10);
    fixed[2].put(label[1],250,45);
    fixed[2].put(entry[3],220,70);
    fixed[2].put(label[2],245,105);
    fixed[2].put(entry[4],220,130);
    fixed[2].put(entry[5],220,190);
    fixed[2].put(*label,230,230);
    fixed[2].put(label[3],50,260);
    fixed[2].put(*ListeBancaire,200,260);
    fixed[2].put(button[5],320,260);
    fixed[2].show_all();
    button[1].signal_clicked().connect([this](){CreeCompte();});
    button[4].signal_clicked().connect([this](){Choix();});
    button[5].signal_clicked().connect([this](){EstCompteValide();});
}
void MaFenetre::Login()
{
    remove();
    add(fixed[1]);
}
void MaFenetre::AfficherPasse()
{
    if(Cbutton->get_active())
    {
        entry[1].set_visibility(true);
       
    }
    else
        entry[1].set_visibility(false);
}
void MaFenetre::CreeCompte()
{
    remove();
    add(fixed[2]);
}
void MaFenetre::Choix()
{
    remove();
    add(*fixed);
}
bool MaFenetre::EstCompteValide()
{
    int i1=1,i2=1,i3=1,i4=1;
    if (entry[4].get_text() != entry[5].get_text())
    {
        label->set_text("Confirmation incorrect");
        i1=0;
    }
    else
    {
        label->set_text("");
        i1=1;
    }
    if (entry[2].get_text() == "") 
    {
        label[1].set_text("Saisir votre nom");
        i2=0;
    }
    else
    {
        label[1].set_text("");
        i2=1;
    }
    if (entry[3].get_text() == "")
    {
        label[2].set_text("Saisir votre prenom");
        i3=0;
    }
    else
    {
        label[2].set_text("");
        i3=1;
    }
    if (ListeBancaire->get_active_text() == "")
    {
        label[3].set_text("Type de compte");
        i4=0;
    }
    else
    {
        label[3].set_text("");
        i4=1;
    }
    if(i1 == 1 && i2 == 1 && i3 == 1 && i4 == 1)
    {
        remove();
    }
    return true;
}
MaFenetre::~MaFenetre()
{
    delete[] button;
    delete[] fixed;
    delete[] Cbutton;
    delete[] ListeBancaire;
    delete[] label;
}