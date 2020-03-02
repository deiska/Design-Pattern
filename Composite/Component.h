#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>

class Component
{
private:
    /* data */
public:
    virtual ~Component()=default;

    virtual int operation()=0;

    virtual int add(Component * component)=0;
    virtual int remove(Component * component)=0;
    virtual Component* getChild(int index)=0;
protected:
    Component(/* args */){};
    
};

#endif
