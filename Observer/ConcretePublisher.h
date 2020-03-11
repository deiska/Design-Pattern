#ifndef CONCRETEPUBLISHER_H
#define CONCRETEPUBLISHER_H

#include <iostream>
#include <list>
#include "Base.h"
// #include "Observer.h"
// #include "Publisher.h"

using namespace std;

class ConcretePublisher:public BasePublisher
{
private:
    string m_name;
    list<BaseObserver *> m_observers;
public:
    ConcretePublisher(std::string name):
        m_name(name)
    {};

    virtual ~ConcretePublisher(){};

    virtual void setStatus(std::string status){ m_status = "Concrete" + m_name + status;};

    virtual std::string getStatus(){ return m_status; };

    void AttachObserver(BaseObserver * obs)
    {
        m_observers.push_back(obs);
    };

    void RemoveObserver(BaseObserver * obs)
    {
        m_observers.remove(obs);
    };

    void notify()
    {
        std::list<BaseObserver *>::iterator i;
        for ( i = m_observers.begin(); i != m_observers.end(); i++)
        {
            (*i)->update();
        }
    };
};


#endif
