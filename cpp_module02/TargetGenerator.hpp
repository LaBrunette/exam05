#ifndef TARGETGENARATOR_HPP
#define TARGETGENARATOR_HPP

#include <string>
#include <iostream>
#include <map>
#include "ATarget.hpp"
class TargetGenerator{
    std::map<std::string, ATarget *> arr_target;
    TargetGenerator(const TargetGenerator& c);
    TargetGenerator& operator=(const TargetGenerator& a);
    public:
    TargetGenerator();
    ~TargetGenerator();
    void learnTargetType(ATarget *target_ptr);
    void forgetTargetType(std::string const &name);
    ATarget* createTarget(std::string const &name);
};




#endif