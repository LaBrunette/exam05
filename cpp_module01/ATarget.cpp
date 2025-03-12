#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(){

}

ATarget::~ATarget(){
    
}


const std::string& ATarget::getType() const{
    return type;
}

ATarget::ATarget(std::string type){
    this->type = type;
}

void ATarget::getHitBySpell(const ASpell& m) const{
    std::cout << getType() << " has been " << m.getEffects() << std::endl; 
}

