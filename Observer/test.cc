#include <iostream>
#include "ConcretePublisher.h"
#include "ConcreteObserver.h"


int main(int argc, char ** argv)
{
    BasePublisher * publisher = new ConcretePublisher("Publisher1");
    BaseObserver * observer = new ConcreteObserver("Observer1");

    publisher->AttachObserver(observer);
    publisher->setStatus("has set status");

    observer->attachPublisher(publisher);

    publisher->notify();

    delete observer;
    delete publisher;


    return 0;
}