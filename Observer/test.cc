/*
 * @Description: 
 * @Author: Geo
 * @Date: 2020-03-11 09:51:06
 * @LastEditTime: 2020-08-31 13:58:24
 * @LastEditors: Geo
 * @Copyright: 
 * @Copyright Owner: Geo
 */
#include <iostream>
#include "ConcretePublisher.h"
#include "ConcreteObserver.h"


int main(int argc, char ** argv) {
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