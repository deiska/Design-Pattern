#ifndef LINUXFACTORY_H
#define LINUXFACTORY_H

#include <iostream>
#include "SystemFactory.h"

class LinuxFactory:public AbstractSystemFactory
{
private:
    /* data */
public:
    LinuxFactory(/* args */);
    ~LinuxFactory();
    virtual AbstractHardware * CreateSerialPortHardware();
    virtual AbstractDatabase * CreateSqlDatabase();
    virtual AbstractDatabase * CreateOracleDatabase();
};

#endif
