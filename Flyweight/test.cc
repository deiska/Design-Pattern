#include <iostream>
#include "Flyweight.h"
#include "ConcreteFlyweight.h"
#include "FlyweightFactory.h"

int main(int argc, char ** argv)
{
    int data = 1;

    FlyweightFactory * flyweightFactory = new FlyweightFactory();
    Flyweight * fa = flyweightFactory->GetFlyweight("aaa");
    fa->operate(data);

    Flyweight * fb = flyweightFactory->GetFlyweight("bbb");
    fb->operate(data);

    Flyweight * fc = flyweightFactory->GetFlyweight("ccc");
    fc->operate(data);

    delete fa;
    delete fb;
    delete fc;
    delete flyweightFactory;


    return 0;
}

