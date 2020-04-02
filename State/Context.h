#ifndef CONTEXT_H
#define CONTEXT_H

#include <iostream>
#include "State.h"

class Context
{
private:
    State * m_pState;
public:
    Context(State * pState) : m_pState(pState){};
    ~Context(){/* delete m_pState; */};

    void Request()
    {
        if (m_pState){
            m_pState->Handle(this);
        }        
    };

    void ChangeState(State * pState)
    {
        m_pState = pState;
    };
};

#endif
