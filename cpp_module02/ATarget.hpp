#ifndef ATARGET_CPP
#define ATARGET_CPP

#include <string>
class ASpell;

class ATarget{
    std::string type;
    public:
    ATarget();
    ~ATarget();
    ATarget(std::string type);
    const std::string& getType() const;
    virtual ATarget *clone() const = 0;
    void getHitBySpell(const ASpell& m) const;
};




#endif