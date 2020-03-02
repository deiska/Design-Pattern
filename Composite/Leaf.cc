#include "Leaf.h"

using namespace std;

Leaf::Leaf(/* args */)
{
}

Leaf::Leaf(const string &name)
{
    m_name = name;
}

Leaf::~Leaf(){}

int Leaf::operation()
{
    cout << m_name << "operation" << endl;

    return 0;
}


int Leaf::add(Component * component)
{

    return 0;
}

int Leaf::remove(Component * component)
{

    return 0;
}

Component* Leaf::getChild(int index)
{

    return 0;
}