#include <iostream>
#include "ConcreteCommand.h"
#include "Receiver.h"
#include "Invoke.h"

int main(int argc, char ** argv)
{
    Command * command = new ConcreteCommand("Command 1 ");
    Receiver * receiver = new Receiver("receiver1");
    command->setReceiver(receiver);

    Invoke * invoke = new Invoke();
    invoke->setCommand(command);
    invoke->Notify();

    delete invoke;
    delete receiver;
    delete command;

    return 0;
}

