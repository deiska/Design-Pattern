#ifndef ORACLEDATABASE_H
#define ORACLEDATABASE_H

#include <iostream>
#include "Database.h"

class OracleDatabase:public AbstractDatabase
{
private:
    /* data */
public:
    OracleDatabase(/* args */);
    virtual ~OracleDatabase();

    virtual int open();
    virtual int close();
    virtual int add();
    virtual int del();
    virtual int search();
    virtual int modify();
};

#endif
