#ifndef APPLICATIONBUILDER_H
#define APPLICATIONBUILDER_H
#include <iostream>
#include "AbstractApplicationBuilder.h"


class LinuxApplication:public AbstractApplicationBuilder
{
private:
    LinuxApplication * m_linuxApp;
public:
    LinuxApplication(/* args */);
    virtual ~LinuxApplication();
    virtual int buildBusiness();
    virtual int buildGui();
    virtual int buildDatabase();
    virtual inline AbstractApplicationBuilder * getResult(){return m_linuxApp;};
};





#endif
