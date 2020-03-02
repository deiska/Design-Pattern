#ifndef CONCRETEDECORATOR_H
#define CONCRETEDECORATOR_H

#include <iostream>
#include "Decorator.h"

class ConcreteDecorator:public Decorator
{
private:
    std::string m_name;
public:
    ConcreteDecorator(std::string name);
    ~ConcreteDecorator();
    virtual int operation();
};




#endif
