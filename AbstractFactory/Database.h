#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>

class AbstractDatabase
{
protected:
    AbstractDatabase(/* args */){};
public:    
    virtual ~AbstractDatabase()=default;

    virtual int open()=0;
    virtual int close()=0;
    virtual int add()=0;
    virtual int del()=0;
    virtual int search()=0;
    virtual int modify()=0;
};

#endif
