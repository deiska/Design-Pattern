#ifndef LEAF_H
#define LEAF_H

#include <iostream>
#include "Component.h"

using namespace std;

class Leaf:public Component
{
private:
    string m_name;
public:
    Leaf(/* args */);
    Leaf(const string &name);
    ~Leaf();

    int operation();
    int add(Component * component);
    int remove(Component * component);
    Component* getChild(int index);
};




#endif
