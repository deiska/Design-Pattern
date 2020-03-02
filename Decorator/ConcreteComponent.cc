#include "ConcreteComponent.h"

using namespace std;

ConcreteComponent::ConcreteComponent(string name)
{
    m_name = name;
}

ConcreteComponent::~ConcreteComponent()
{}

int ConcreteComponent::operation()
{
    cout << m_name << " operation !" << endl;
    return 0;
}