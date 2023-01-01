#ifndef MAFENETRE_HPP
#define MAFENETRE_HPP
#include <string.h>
#include <gtkmm/window.h>
#include <gtkmm/fixed.h>
#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <gtkmm/button.h>
#include <gtkmm/checkbutton.h>
#include <gtkmm/comboboxtext.h>
#include <gtkmm/spinbutton.h>
using namespace Gtk;
using namespace std;
    class MaFenetre : public Window
    {
        Fixed *fixed;
        Label *label;
        Entry *entry;
        Button *button;
        CheckButton *Cbutton;
        ComboBoxText *ListeBancaire;
        SpinButton *Sbutton;
        public:
            MaFenetre();
            void Login();
            void Choix();
            void CreeCompte();
            void AfficherPasse();
            bool EstCompteValide();
            void MaPage(string);
            void SeDeconnecter();
            void Log();
            ~MaFenetre();
    };
#endif