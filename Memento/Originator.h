#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include <iostream>
#include <string>
#include "Memento.h"

class Originator
{
private:
    std::string m_state;
public:
    Originator(){};

    Originator(const std::string &state)
    {
        m_state = state;
    };

    ~Originator(){};

    Memento * CreateMemento()
    {
        return new Memento(m_state);
    };

    void RestoreToMemento(Memento * pMemento)
    {
        m_state = pMemento->GetState();
    };

    void SetState(const std::string & state)
    {
        m_state = state;
    };

    std::string GetState(const std::string state)
    {
        return state;
    };

    void show()
    {
        std::cout << "Originator State:" << m_state << std::endl;        
    };
};



#endif

