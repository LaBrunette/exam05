#ifndef WARLOCK_CPP
#define WARLOCK_CPP

#include <string>
#include <iostream>

class Warlock{
    std::string name;
    std::string title;
    Warlock();
    Warlock (const Warlock &c);
    Warlock &operator= (const Warlock &c);
    public:
    ~Warlock();
    Warlock(const std::string &name, const std::string &title);
    const std::string& getName() const;
    const std::string& getTitle() const;
    void setTitle(const std::string &titre); 
    void introduce() const;
};






#endif