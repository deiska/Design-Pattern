#ifndef RECEIVER_H
#define RECEIVER_H

#include <iostream>

class Receiver
{
private:
    std::string m_name;
public:
    Receiver(std::string name){ m_name = name;};
    ~Receiver(){};
    void Action()
    {
        std::cout << "Reciver " << m_name << " take action now !" << std::endl;
    };
};


#endif

