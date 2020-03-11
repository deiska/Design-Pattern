#include <iostream>
#include "Invoke.h"


Invoke::Invoke(/* args */)
{
}

Invoke::~Invoke()
{}

void Invoke::setCommand(Command * command)
{
    m_commands.push_back(command);
}

void Invoke::Notify()
{
    for (auto c_command = m_commands.begin(); 
            c_command != m_commands.end();
            c_command++)
    {
        (*c_command)->execute();
    }
    return ;
}
