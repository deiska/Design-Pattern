#ifndef ABSTRACTCOMPUTER_H
#define ABSTRACTCOMPUTER_H

#include <iostream>
#include "AbstractSystem.h"

class AbstractComputer
{
protected:
    AbstractComputer(/* args */){};
public:
    
    virtual ~AbstractComputer()=default;

    virtual int installSystem(AbstractSystem * system)=0;
};


#endif

