#ifndef REQUEST_H
#define REQUEST_H
#include <iostream>


class Request
{
protected:
    Request(/* args */){};
    Request(int number){m_number = number;};
private:
    int m_number;
public:
    virtual ~Request(){m_number = 0;};

    virtual int numberHandler(Request * req)=0;
};

// Request::Request(/* args */)
// {
// }

// Request::~Request()
// {
// }




#endif

