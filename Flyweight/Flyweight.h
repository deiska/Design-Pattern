#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <iostream>
#include <map>

class Flyweight
{
protected:
    Flyweight(){};
private:
    /* data */
public:
    virtual void operate(int data)=0;
    // {
    //     std::cout << "data ouput :" << data << std::endl;
    // };
    virtual ~Flyweight()=default;
};




#endif
