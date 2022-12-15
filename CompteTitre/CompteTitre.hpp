#ifndef CompteTitre_HPP_
#define CompteTitre_HPP_
#include "CompteBancaire.hpp"
<<<<<<< HEAD

    class CompteTitre : public CompteBancaire
    {
        private:
            
        public:
        
=======
using namespace std;

    class CompteTitre : public CompteCourant
    {
        public:
            CompteTitre::CompteTitre()
            float CompteTitre::Achat(string,string,string,float);
            float CompteTitre::Vente(string,string,string,float);  
>>>>>>> Alazi
    };
    
#endif