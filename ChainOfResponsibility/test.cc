#include <iostream>
#include "Handle.h"


int main(int argc, char ** argv)
{
    // std::string 

    Handle * oldHandle = new ConcreteHandle();
    Handle * newHandle = new ConcreteHandleNew();

    oldHandle->SetHandleChain(newHandle);
    newHandle->SetHandleChain(oldHandle);

    oldHandle->HandleRequest("new");
    newHandle->HandleRequest("1");

    delete oldHandle;
    delete newHandle;

    return 0;
}

