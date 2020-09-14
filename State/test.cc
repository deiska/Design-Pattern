/*
 * @Description: 
 * @Author: Geo
 * @Date: 2020-04-02 14:59:31
 * @LastEditTime: 2020-06-04 15:25:15
 * @LastEditors: Geo
 */ 
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