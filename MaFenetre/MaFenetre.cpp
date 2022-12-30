#include <iostream>
#include "MaFenetre.hpp"
using namespace std;
MaFenetre::MaFenetre()
{
    fixed = new Fixed[3];
    button = new Button[5];
    entry = new Entry[8];
    Cbutton = new CheckButton[1];
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
    entry[3].set_placeholder_text("Votre prenom");
    fixed[2].put(entry[2],220,20);
    fixed[2].put(entry[3],220,70);
    fixed[2].put(button[4],0,0);
    fixed[2].show_all();
    button[1].signal_clicked().connect([this](){CreeCompte();});
    button[4].signal_clicked().connect([this](){Choix();});
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
MaFenetre::~MaFenetre()
{
    delete[] button;
    delete[] fixed;
    delete[] Cbutton;
}