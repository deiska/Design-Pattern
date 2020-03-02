#ifndef CONCRETECOMPONENT_H
#define CONCRETECOMPONENT_H

#include <iostream>
#include "Component.h"

class ConcreteComponent:public Component
{
private:
    std::string m_name;
public:
    ConcreteComponent(std::string name);
    ~ConcreteComponent();

    virtual int operation();
};


#endif
