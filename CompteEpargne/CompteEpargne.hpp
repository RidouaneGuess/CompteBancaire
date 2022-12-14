#ifndef CompteEpargne_HPP_
#define CompteEpargne_HPP_
#include "CompteBancaire.hpp"
using namespace std;
    class CompteEpargne : public ComppteBancaire
    {
        public:
            CompteEpargne::CompteEpargne();
            void CompteEpargne::Protocole(string,float);

    };

#endif