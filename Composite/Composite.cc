#include "Composite.h"

using namespace std;

Composite::Composite()
{

}

Composite::Composite(const string &name)
{
    m_name = name;
}

Composite::~Composite()
{
    cout << "~ Composite" << endl;
}

int Composite::operation()
{
    cout << m_name << "operation !" << endl;

    list<Component *>::iterator iterStart, iterEnd;

    iterStart = m_ComList.begin();
    iterEnd = m_ComList.end();

    while (iterStart != iterEnd)
    {
        (*iterStart)->operation();
        iterStart++;
    }    

    return 0;
}

int Composite::add(Component * component)
{
    m_ComList.push_back(component);

    return 0;
}

int Composite::remove(Component * component)
{
    m_ComList.remove(component);

    return 0;
}

Component* Composite::getChild(int index)
{
    if (index < 0 || index >= this->m_ComList.size())
    {
        return NULL;
    }
    
    list<Component *>::iterator iter = m_ComList.begin();
    for (size_t i = 0; i < index; i++)
    {
        iter++;
    }
    
    return *iter;
}
