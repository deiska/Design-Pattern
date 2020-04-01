#ifndef MEMENTO_H
#define MEMENTO_H

#include <iostream>
#include <string>
#include "Originator.h"

// class Originator;

class Memento
{
private:
    friend class Originator;
    std::string m_state;
public:
    Memento(std::string & state);
    ~Memento();

    std::string GetState()
    {
        return m_state;
    };
};

Memento::Memento(std::string & state)
{
    m_state = state;
}

Memento::~Memento()
{
}




#endif
