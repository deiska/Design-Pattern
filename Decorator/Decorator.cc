#include "Decorator.h"

Decorator::Decorator()
{

}

Decorator::~Decorator()
{}

int Decorator::setComponent(Component * comp)
{
    m_component = comp;

    return 0;
}

int Decorator::operation()
{
    if (m_component)
    {
        m_component->operation();
    }

    return 0;
}
