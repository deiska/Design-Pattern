#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include "Receiver.h"

class Command
{
protected:
    Command(/* args */){};
private:
    /* data */
public:    
    virtual ~Command()=default;

    virtual void execute()=0;

    virtual int setReceiver(Receiver * receiver)=0;
};


// class CommandKind1:public Command
// {
// private:
//     /* data */
// public:
//     CommandKind1(/* args */);
//     ~CommandKind1();
//     virtual void execute();
//     virtual int setReceiver(Receiver * receiver);
// };

// CommandKind1::CommandKind1(/* args */)
// {
// }

// CommandKind1::~CommandKind1()
// {
// }



#endif
