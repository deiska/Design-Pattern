#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H

#include <iostream>
#include <iterator>
#include "Base.h"
// #include "Publisher.h"
// #include "Observer.h"

class ConcreteObserver:public BaseObserver
{
private:
    std::string m_name;
    list<BasePublisher *> m_publishersList;
public:
    ConcreteObserver(std::string name){m_name = name;};
    virtual ~ConcreteObserver() override{};

    virtual void update() override
    {
        std::list<BasePublisher *>::iterator i;
        for ( i = m_publishersList.begin(); i != m_publishersList.end(); i++)
        {
            cout << (*i)->getStatus() << endl;
        }
    };

    void attachPublisher(BasePublisher * pub) override
    {
        m_publishersList.push_back(pub);
    };

    void removePublisher(BasePublisher * pub) override
    {
        m_publishersList.remove(pub);
    };
};

#endif
