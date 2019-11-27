#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <iostream>
#include "AbstractApplicationBuilder.h"

class Director
{
private:
    /* data */
public:
    Director();
    ~Director();

    int create(AbstractApplicationBuilder * abAppBuilder);

};



#endif
