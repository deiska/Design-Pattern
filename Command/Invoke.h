#ifndef INVOKE_H
#define INVOKE_H

#include <iostream>
#include <list>
#include "Command.h"

class Invoke
{
private:
    std::list<Command *> m_commands;
public:    
    Invoke(/* args */);
    ~Invoke();

    void setCommand(Command * command);
    void Notify();
};

#endif
