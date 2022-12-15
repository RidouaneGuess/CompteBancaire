#ifndef CompteIndivis_HPP_
#define CompteIndivis_HPP_
#include "CompteBancaire.hpp"

    class CompteIndivis : public CompteJoint
    {
        public:
            CompteIndivis::CompteIndivis();
            float CompteIndivis::retrait(string,string,float);
            float CompteIndivis::versement(string,string,float);

    };
    
#endif