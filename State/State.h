#ifndef STATE_H
#define STATE_H

#include <iostream>


class Context;

class State
{
protected:
    State(){};
private:
    
public:
    virtual ~State()=default;
    virtual void Handle(Context * pContext)=0;
};


class ConcreteStateA:public State
{
private:

public:
    ConcreteStateA(){};
    virtual ~ConcreteStateA(){};

    virtual void Handle(Context * pContext)
    {
        std::cout<< "this is State A!!" << std::endl;
    };
};

class ConcreteStateB:public State
{
private:

public:
    ConcreteStateB(){};
    virtual ~ConcreteStateB(){};

    virtual void Handle(Context * pContext)
    {
        std::cout<< "this is State B!!" << std::endl;
    };
};


#endif
