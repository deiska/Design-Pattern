#ifndef HARDWARE_H
#define HARDWARE_H


#include <iostream>

class AbstractHardware
{
protected:
    AbstractHardware(/* args */){};

public:    
    virtual ~AbstractHardware()=default;

    virtual int open()=0;
    virtual int close()=0;
    virtual int read()=0;
    virtual int write()=0;
};



#endif