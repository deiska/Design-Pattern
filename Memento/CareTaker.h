#ifndef CARETAKER_H
#define CARETAKER_H

#include <iostream>
#include "Memento.h"

class CareTaker
{
private:
    Memento * m_Memento;
public:
    CareTaker(/* args */);
    ~CareTaker();

    void SetMemento(Memento * pMemento)
    {
        m_Memento = pMemento;
    };

    Memento * GetMemento()
    {
        return m_Memento;
    };
};

CareTaker::CareTaker(/* args */)
{
}

CareTaker::~CareTaker()
{
}



#endif
