#ifndef ASPELL_CPP
#define ASPELL_CPP

#include <string> 
#include <iostream>
#include "ATarget.hpp"


class ASpell{
    protected:
    std::string name;
    std::string effects;
    public:
    ASpell();
    virtual ~ASpell();
    ASpell(std::string name, std::string effects);
    std::string getName() const;
    std::string getEffects() const;
    virtual ASpell *clone() const = 0;
    void launch(const ATarget& a);
};




#endif