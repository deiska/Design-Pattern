#ifndef ABSTRACTSYSTEM_H
#define ABSTRACTSYSTEM_H

#include <iostream>

class AbstractSystem
{
protected:
    AbstractSystem(/* args */){};
public:    
    virtual ~AbstractSystem()=default;

    virtual int operationSystem()=0;
};



#endif
