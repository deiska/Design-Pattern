/*
 * @Description: 
 * @Author: Geo
 * @Date: 2020-03-11 09:51:06
 * @LastEditTime: 2020-08-31 13:52:30
 * @LastEditors: Geo
 * @Copyright: 
 * @Copyright Owner: Geo
 */
#ifndef OBSERVER_CONCRETEOBSERVER_H_
#define OBSERVER_CONCRETEOBSERVER_H_

#include <iostream>
#include <iterator>
#include <string>
#include <list>
#include "Base.h"
// #include "Publisher.h"
// #include "Observer.h"

class ConcreteObserver:public BaseObserver {
 private:
    std::string m_name;
    list<BasePublisher *> m_publishersList;

 public:
    explicit ConcreteObserver(std::string name) { m_name = name; }
    virtual ~ConcreteObserver() {}

    virtual void update() {
        std::list<BasePublisher *>::iterator i;
        for (i = m_publishersList.begin(); i != m_publishersList.end(); i++) {
            cout << (*i)->getStatus() << endl;
        }
    }

    void attachPublisher(BasePublisher * pub) {
        m_publishersList.push_back(pub);
    }

    void removePublisher(BasePublisher * pub) {
        m_publishersList.remove(pub);
    }
};

#endif  // OBSERVER_CONCRETEOBSERVER_H_
