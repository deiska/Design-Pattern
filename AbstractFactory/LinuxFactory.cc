#include "LinuxFactory.h"
#include "SerialPort.h"
#include "SqlDatabase.h"
#include "OracleDatabase.h"

LinuxFactory::LinuxFactory()
{
}

LinuxFactory::~LinuxFactory()
{}

AbstractDatabase * LinuxFactory::CreateSqlDatabase()
{
    return new SqlDatabase();
}

AbstractDatabase * LinuxFactory::CreateOracleDatabase()
{
    return new OracleDatabase();
}

AbstractHardware * LinuxFactory::CreateSerialPortHardware()
{
    return new SerialPort();
}

