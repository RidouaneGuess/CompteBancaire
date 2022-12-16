#ifndef CompteTitre_HPP_
#define CompteTitre_HPP_
#include "../CompteCourant/CompteCourant.hpp"
using namespace std;

    class CompteTitre : public CompteCourant
    {
        public:
            CompteTitre(string,float);
            void ActionsImmobiliere();
    };
    
#endif
