#ifndef LENOVOCOMPUTER_H
#define LENOVOCOMPUTER_H

#include <iostream>
#include "AbstractComputer.h"
#include "AbstractSystem.h"

class LenovoComputer:public AbstractComputer
{
private:
    AbstractSystem * m_system;
public:
    LenovoComputer(/* args */);
    virtual ~LenovoComputer();
    virtual int installSystem(AbstractSystem * system) override;
};



#endif
