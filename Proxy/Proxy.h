#ifndef PROXY_H
#define PROXY_H

#include <iostream>
#include "Subject.h"
#include "RealSubject.h"

class Proxy:public Subject
{
private:
    std::string m_name;
    RealSubject * realSub;
public:
    Proxy(std::string name)
    {
        m_name = name;
        realSub = new RealSubject(name);
    };
    ~Proxy()
    {
        if (realSub)
        {
            delete realSub;
            realSub = nullptr;
        }        
    };

    void operate()
    {
        if (realSub)
        {
            realSub->operate();
        }        
    };
};


#endif
