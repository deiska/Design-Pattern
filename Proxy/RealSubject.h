#ifndef REALSUBJECT_H
#define REALSUBJECT_H

#include <iostream>
#include "Subject.h"

class RealSubject:public Subject
{
private:
    std::string m_name;
public:
    RealSubject(std::string name){m_name = name;};
    ~RealSubject(){m_name = "";};
    virtual void operate()
    {
        std::cout << "name is :" << m_name << std::endl;
    };
};


#endif
