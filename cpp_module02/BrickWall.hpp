#ifndef BRICKWALL_CPP
#define BRICKWALL_CPP

#include "ASpell.hpp"
#include "ATarget.hpp"

class BrickWall: public ATarget{
    public:
    BrickWall();
    ~BrickWall();
    ATarget* clone() const;
};




#endif