#ifndef ADAPTER_H
#define ADAPTER_H

#include <iostream>
#include "Target.h"
#include "Adaptee.h"

using namespace std;

class Adapter: public Target
{
private:
    Adaptee * m_adaptee;
public:
    Adapter() : m_adaptee (new Adaptee)
    {
        // m_adaptee = new Adaptee();
    };
    ~Adapter()
    {
        if (m_adaptee != nullptr)
        {
            delete m_adaptee;
            m_adaptee = nullptr;
        }
    };
    virtual void targetReq(){m_adaptee->adapteeReq();};
};


#endif
