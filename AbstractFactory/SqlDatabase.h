#ifndef SQLDATABASE_H
#define SQLDATABASE_H

#include <iostream>
#include "Database.h"

class SqlDatabase:public AbstractDatabase
{
private:
    /* data */
public:
    SqlDatabase(/* args */);
    virtual ~SqlDatabase();

    virtual int open();
    virtual int close();
    virtual int add();
    virtual int del();
    virtual int search();
    virtual int modify();
};


#endif
