#ifndef CONCRETERECEIVER1_H
#define CONCRETERECEIVER1_H

#include <iostream>
#include "Receiver.h"

class ConcreteReceiver1:public Receiver
{
private:
    /* data */
public:
    ConcreteReceiver1(/* args */);
    ~ConcreteReceiver1();

    virtual void Action();
    virtual void execute();
    virtual int setReceiver(Receiver * receiver);
};




#endif
