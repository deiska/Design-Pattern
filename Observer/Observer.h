#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include <list>
#include "Publisher.h"


using namespace std;
class BaseObserver
{
protected:
    BaseObserver(/* args */){};
    
public:

    virtual ~BaseObserver()=default;

    virtual void update()=0;

    
};



#endif
