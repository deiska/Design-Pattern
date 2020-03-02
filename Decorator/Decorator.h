#ifndef DECORATOR_H
#define DECORATOR_H

#include <iostream>
#include "Component.h"

class Decorator:public Component
{
private:
    Component * m_component;
public:
    Decorator();
    ~Decorator();

    int setComponent(Component * comp);
    virtual int operation();
};


#endif
