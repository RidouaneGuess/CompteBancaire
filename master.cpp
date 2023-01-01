#include <iostream>
#include <gtkmm/main.h>
#include "MaFenetre/MaFenetre.hpp"
using namespace Gtk;
int main(int argc , char** argv)
{
    Main app(argc,argv);
    MaFenetre fenetre;
    Main::run(fenetre);
    return EXIT_SUCCESS;
}