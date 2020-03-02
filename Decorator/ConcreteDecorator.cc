#include "ConcreteDecorator.h"

ConcreteDecorator::ConcreteDecorator(std::string name)
{
    m_name = name;
}

ConcreteDecorator::~ConcreteDecorator()
{
}

int ConcreteDecorator::operation()
{
    std::cout << m_name << " operation!!!" << std::endl;


    return 0;
}
