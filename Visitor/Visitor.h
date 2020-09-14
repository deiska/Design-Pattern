/*
 * @Description: 
 * @Author: Geo
 * @Date: 2020-08-31 17:03:07
 * @LastEditTime: 2020-09-01 11:21:28
 * @LastEditors: Geo
 * @Copyright: 
 * @Copyright Owner: Geo
 */
#ifndef VISITOR_VISITOR_H_
#define VISITOR_VISITOR_H_

#include <iostream>
#include <string>

class Element;

class Visitor {
 private:
    /* data */
 public:
    virtual ~Visitor() = default;
    virtual void VisitConcrectElement(Element * ele) = 0;
};

class ConcreteVisitorA:public Visitor {
 private:
    std::string     m_info;
 public:
    ConcreteVisitorA();
    ~ConcreteVisitorA();
};

ConcreteVisitorA::ConcreteVisitorA() {
}

ConcreteVisitorA::~ConcreteVisitorA() {
}


#endif  // VISITOR_VISITOR_H_
