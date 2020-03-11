#ifndef PUBLISHER_H
#define PUBLISHER_H

#include <iostream>
#include <list>
#include "Observer.h"
// #include "ConcreteObserver.h"

using namespace std;
class BasePublisher
{
private:
    

protected:
    BasePublisher(/* args */){};
    std::string m_status;
public:
    virtual ~BasePublisher()=default;

    virtual void AttachObserver(BaseObserver * obs)=0;

    virtual void RemoveObserver(BaseObserver * obs)=0;

    virtual void setStatus(std::string s){m_status = s;};

    virtual std::string getStatus(){return m_status;};

    virtual void notify()=0;

};



#endif
