#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
class SpellBook{
    std::map<std::string, ASpell *> arr_spell;
    SpellBook(const SpellBook& c);
    SpellBook& operator=(const SpellBook& a);
    public:
    SpellBook();
    ~SpellBook();
    void learnSpell(ASpell *aspell_ptr);
    void forgetSpell(std::string const &name);
    ASpell* createSpell(std::string const &name);
};




#endif