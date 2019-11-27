#ifndef SINGLETON_H
#define SINGLETON_H
#include <iostream>
#include <thread>
#include <mutex>

std::mutex mutex;

class Singleton
{
private:
    Singleton(){};
    static Singleton * m_instance;

    class GC
    {
    private:
        /* data */
    public:
        // GC(/* args */);
        ~GC()
        {
            if (m_instance != nullptr)
            {
                delete m_instance;
                m_instance = nullptr;
            }
            
        };
    };

    static GC gc;
    
public:
    static Singleton * getInstance()
    {
        if (m_instance == nullptr)
        {
            mutex.lock();
            if (m_instance == nullptr)
            {
                m_instance = new Singleton();
            }
            mutex.unlock();
        }

        return m_instance;
    };
    ~Singleton();

// protected:
//     Singleton(/* args */){};
};



#endif
