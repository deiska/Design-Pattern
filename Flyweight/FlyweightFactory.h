#ifndef FLYWEIGHTFACTORY_H
#define FLYWEIGHTFACTORY_H

#include <iostream>
#include "ConcreteFlyweight.h"

class FlyweightFactory
{
private:
    std::map<std::string, Flyweight*> flyweightMap;
public:
    FlyweightFactory(/* args */){};
    ~FlyweightFactory(){};

    Flyweight * GetFlyweight(std::string key)
    {
        if (flyweightMap[key] == NULL)
        {
            flyweightMap[key] = new ConcreteFlyweight();
        }
        return flyweightMap[key];        
    }
};



#endif
