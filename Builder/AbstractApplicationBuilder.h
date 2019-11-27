#ifndef ABSTRACTAPPLICATIONBUILDER_H
#define ABSTRACTAPPLICATIONBUILDER_H
#include <iostream>

class AbstractApplicationBuilder
{
private:
    /* data */
public:    
    virtual ~AbstractApplicationBuilder()=default;
    virtual int buildBusiness()=0;
    virtual int buildGui()=0;
    virtual int buildDatabase()=0;
    virtual AbstractApplicationBuilder * getResult()=0;
protected:
    AbstractApplicationBuilder(/* args */){};
};

#endif
