#ifndef HANDLE_H
#define HANDLE_H

#include <iostream>

class Handle
{
protected:
    Handle(/* args */){};
    Handle * handler;
private:
    /* data */
public:    
    virtual ~Handle()=default;
    int SetHandleChain(Handle * h)
    {
        handler = h;
        return 0;
    };
    virtual int HandleRequest(std::string str)
    {
        handler->HandleRequest(str);
        return 0;
    };
};

class ConcreteHandle:public Handle
{
private:
    /* data */
public:
    ConcreteHandle(/* args */){};
    virtual ~ConcreteHandle()
    {
    };

    virtual int HandleRequest(std::string str)
    {
        if (str.compare("1") == 0)
        {
            std::cout << "handle request from " << str << std::endl;
        }
        return 0;
    };
};

class ConcreteHandleNew:public Handle
{
private:
    /* data */
public:
    ConcreteHandleNew(/* args */){};
    virtual ~ConcreteHandleNew()
    {
    };

    virtual int HandleRequest(std::string str)
    {
        if (str.compare("new") == 0)
        {
            std::cout << "handle request from " << str << std::endl;
        }
        return 0;
    };
};


#endif
