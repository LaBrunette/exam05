#include "ASpell.hpp"

ASpell::ASpell(){

}

ASpell::~ASpell(){
    
}

std::string ASpell::getName() const{
    return name;
}

std::string ASpell::getEffects() const{
    return effects;
}

ASpell::ASpell(std::string name, std::string effects){
    this->name = name;
    this->effects = effects;
}

void ASpell::launch(const ATarget& a){
    a.getHitBySpell(*this);
}

