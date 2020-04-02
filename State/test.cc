#include <iostream>
#include "State.h"
#include "Context.h"


int main(int argc, char ** argv)
{
    State * pStateA = new ConcreteStateA();
    State * pStateB = new ConcreteStateB();
    Context * pContext = new Context(pStateA);

    pContext->Request();
    pContext->ChangeState(pStateB);
    pContext->Request();
delete(pContext);
    delete(pStateA);
    delete(pStateB);
    

    return 0;
}