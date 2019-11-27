#ifndef STATICSINGLETON_H
#define STATICSINGLETON_H

#include <iostream>


/*
    static variales make sure gabige collection and thread safety, but need to rewrite function "StaticSingleton" and "=="
*/
class StaticSingleton
{
private:
    StaticSingleton(/* args */){};
    ~StaticSingleton(){};

    StaticSingleton(const StaticSingleton&);
    StaticSingleton& operator==(const StaticSingleton&);
public:
    static StaticSingleton * getInstance()
    {
        static StaticSingleton instance;
        return &instance;
    };
    
};


#endif