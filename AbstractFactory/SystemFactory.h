#ifndef SYSTEMFACTORY_H
#define SYSTEMFACTORY_H

#include <iostream>
#include "Hardware.h"
#include "Database.h"

class AbstractSystemFactory
{
protected:
    AbstractSystemFactory(/* args */){};
public:    
    virtual ~AbstractSystemFactory()=default;
    virtual AbstractHardware * CreateSerialPortHardware()=0;
    virtual AbstractDatabase * CreateSqlDatabase()=0;
    virtual AbstractDatabase * CreateOracleDatabase()=0;
};






#endif

