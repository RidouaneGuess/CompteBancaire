#ifndef CompteEpargne_HPP_
#define CompteEpargne_HPP_
#include "../CompteBancaire/CompteBancaire.hpp"
using namespace std;
    class CompteEpargne : public CompteBancaire
    {
        public:
            void Protocole();
    };

#endif