#ifndef TARGET_H
#define TARGET_H

#include <iostream>

class Target
{
private:
    /* data */
public:
    Target(/* args */){};
    virtual ~Target()=default;
    virtual void targetReq()=0;
};

// Target::Target(/* args */)
// {
// }

// Target::~Target()
// {
// }


#endif
