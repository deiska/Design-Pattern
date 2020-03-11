#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>

class Subject
{
protected:
    Subject(/* args */){};
private:
    /* data */
public:
    virtual ~Subject()=default;

    virtual void operate()=0;
};

// Subject::Subject(/* args */)
// {
// }

// Subject::~Subject()
// {
// }



#endif
