#ifndef LINUXSYSTEM_H
#define LINUXSYSTEM_H

#include <iostream>
#include "AbstractSystem.h"


class LinuxSystem:public AbstractSystem
{
private:
    /* data */
public:
    LinuxSystem(/* args */);
    virtual ~LinuxSystem();

    virtual int operationSystem() override;
};






#endif

