#ifndef MAFENETRE_HPP
#define MAFENETRE_HPP
#include <gtkmm/window.h>
#include <gtkmm/fixed.h>
#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <gtkmm/button.h>
using namespace Gtk;
    class MaFenetre : public Window
    {
        Fixed *fixed;
        // Label *label;
        Entry *entry;
        Button *button;
        public:
            MaFenetre();
            void Login();
            void Choix();
            ~MaFenetre();
    };
#endif