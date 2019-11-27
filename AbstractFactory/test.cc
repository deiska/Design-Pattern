#include <iostream>
#include "Hardware.h"
#include "LinuxFactory.h"

int main(int argc, char ** argv)
{
    // printf("factory !!!!\n");
    AbstractSystemFactory * factory = new LinuxFactory();
    AbstractDatabase * oracleDB =  factory->CreateOracleDatabase();

    delete factory;
    delete oracleDB;


    return 0;
}

