#ifndef BASE_H
#define BASE_H

#include <iostream>

class BasePublisher;
// class BaseObserver;

class BaseObserver
{
protected:
    BaseObserver(/* args */){};
    
public:

    virtual ~BaseObserver()=default;

    virtual void update()=0;

    virtual void attachPublisher(BasePublisher * publisher)=0;

    virtual void removePublisher(BasePublisher * pub)=0;
};

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

