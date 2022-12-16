#ifndef CompteIndivis_HPP_
#define CompteIndivis_HPP_
#include "../CompteJoint/CompteJoint.hpp"
    class CompteIndivis : public CompteJoint
    {
        public:
            CompteIndivis(string,string,float);
            void FaireAction(string,string);
    };
    
#endif