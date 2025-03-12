#ifndef WARLOCK_CPP
#define WARLOCK_CPP

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class Warlock{
    std::string name;
    std::string title;
    Warlock();
    Warlock (const Warlock &c);
    Warlock &operator= (const Warlock &c);
    std::map<std::string, ASpell *> arr;

    public:
    ~Warlock();
    Warlock(const std::string &name, const std::string &title);
    const std::string& getName() const;
    const std::string& getTitle() const;
    void setTitle(const std::string &titre); 
    void introduce() const;
    void learnSpell(ASpell* spell_ptr);
    void forgetSpell(std::string spell_name);
    void launchSpell(std::string spell_name, ATarget const &target_ref);
};






#endif