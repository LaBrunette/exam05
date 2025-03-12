#include "warlock.hpp"

Warlock::Warlock(){

}

Warlock::Warlock(const std::string &name, const std::string &title){
    this->title = title;
    this->name = name;
    std::cout << name << ": " << "This looks like another boring day." << std::endl;
}

Warlock::~Warlock(){
    std::cout << name << ": " << "My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const{
    return name;
}

const std::string& Warlock::getTitle() const{
    return title;
}

void Warlock::setTitle(const std::string &titre){
    this->title = titre;
}

void Warlock::introduce() const{
    std::cout << name << ": " << "I am " << name << ", " << title << "!" << std::endl; 
}

Warlock::Warlock (const Warlock &c){
    this->name = c.name;
    this->title = c.title;
}

Warlock &Warlock::operator= (const Warlock &c){
    if (this != &c){
        this->name = c.name;
        this->title = c.title;
    }
    return *this;
}
