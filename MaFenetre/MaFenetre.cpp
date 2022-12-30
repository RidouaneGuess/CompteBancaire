#include <iostream>
#include "MaFenetre.hpp"
using namespace std;
MaFenetre::MaFenetre()
{
    fixed = new Fixed[2];
    button = new Button[4];
    entry = new Entry[2];
    set_title("VisioBancaire");
    resize(600,300);
    set_position(WIN_POS_CENTER);
    add(*fixed);
    button->set_label("J' ai un compte");
    button[1].set_label("Creer un compte");
    button[2].set_label("<-");
    button[3].set_label("Connecter");
    entry->set_placeholder_text("votre nom");
    entry[1].set_placeholder_text("Mot de passe");
    entry[1].set_visibility(false);
    fixed->put(*button,120,120);
    fixed->put(button[1],350,120);
    fixed[1].put(*entry,220,80);
    fixed[1].put(entry[1],220,130);
    fixed[1].put(button[2],0,0);
    fixed[1].put(button[3],250,200);
    fixed->show_all();
    fixed[1].show_all();
    button->signal_clicked().connect([this](){Login();});
    button[2].signal_clicked().connect([this](){Choix();});
}
void MaFenetre::Login()
{
    remove();
    add(fixed[1]);
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
}