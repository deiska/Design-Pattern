#ifndef CONCRETECOMMAND_H
#define CONCRETECOMMAND_H

#include <iostream>
#include "Command.h"
#include "Receiver.h"


class ConcreteCommand:public Command
{
private:
    std::string m_name;
    Receiver * m_receiver;
public:
    ConcreteCommand(std::string name){ m_name = name;};
    virtual ~ConcreteCommand(){};

    virtual int setReceiver(Receiver * receiver)
    {
        m_receiver = receiver;
    };

    virtual void execute()
    {
        std::cout << "ConcreteCommand " << m_name << " excute !" << std::endl;
        m_receiver->Action();
    };
};


#endif

