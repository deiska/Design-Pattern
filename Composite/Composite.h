#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <iostream>
#include <vector>
#include <list>
#include "Component.h"

using namespace std;

class Composite:public Component
{
private:
    list<Component *> m_ComList;
    string m_name;
public:
    Composite();
    Composite(const string &name);
    ~Composite();
    
    int operation();
    int add(Component * component);
    int remove(Component * component);
    Component* getChild(int index);
};

#endif
