#ifndef CONCRETEFLAYWEIGHT_H
#define CONCRETEFLAYWEIGHT_H

#include <iostream>
#include "Flyweight.h"

class ConcreteFlyweight:public Flyweight
{
private:
    /* data */
public:
    ConcreteFlyweight(/* args */){};
    ~ConcreteFlyweight(){};
    virtual void operate(int data)
    {
        std::cout << "data ouput :" << data << std::endl;
    };
};


#endif
