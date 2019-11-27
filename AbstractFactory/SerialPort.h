#ifndef SERIALPORT_H
#define SERIALPORT_H

#include <iostream>
#include "Hardware.h"

class SerialPort:public AbstractHardware
{
protected:
    /* data */
public:
    SerialPort(/* args */);
    virtual ~SerialPort();

    virtual int open();
    virtual int close();
    virtual int read();
    virtual int write();

private:

};


#endif
