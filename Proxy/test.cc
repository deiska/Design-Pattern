#include <iostream>
#include "Proxy.h"

#define DELETE(p) \
    if(p)\
    {\
        delete p;\
        p=nullptr;\
    }


int main(int argc, char ** argv)
{
    Subject * pProxy = new Proxy("Proxy1");

    pProxy->operate();

    DELETE(pProxy);

    return 0;
}