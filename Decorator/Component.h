#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>


class Component
{
private:
    
public:
    virtual ~Component()=default;

    virtual int operation()=0;
protected:
    Component(){};
};


#endif
