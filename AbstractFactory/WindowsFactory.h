#ifndef WINDOWSFACTORY_H
#define WINDOWSFACTORY_H

#include <iostream>
#include "SystemFactory.h"


class WindowsFactory:public AbstractSystemFactory
{
private:
    /* data */
public:
    WindowsFactory(/* args */);
    ~WindowsFactory();
    virtual AbstractHardware * CreateHardware();
    virtual AbstractDatabase * CreateDatabase();
};

#endif 
