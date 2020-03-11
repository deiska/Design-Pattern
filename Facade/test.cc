#include <iostream>

class SubSystem1
{
private:
    std::string m_name;
public:
    SubSystem1(std::string name){m_name = name;};
    ~SubSystem1(){};
    void operation(){std::cout << m_name << " operation !!!" << std::endl;};
};

class SubSystem2
{
private:
    std::string m_name;
public:
    SubSystem2(std::string name){m_name = name;};
    ~SubSystem2(){};
    void operation(){std::cout << m_name << " operation !!!" << std::endl;};
};

class SubSystem3
{
private:
    std::string m_name;
public:
    SubSystem3(std::string name){m_name = name;};
    ~SubSystem3(){};
    void operation(){std::cout << m_name << " operation !!!" << std::endl;};
};

class SubSystem4
{
private:
    std::string m_name;
public:
    SubSystem4(std::string name){m_name = name;};
    ~SubSystem4(){};
    void operation(){std::cout << m_name << " operation !!!" << std::endl;};
};

class Facade
{
private:
    SubSystem1 * s1;
    SubSystem2 * s2;
    SubSystem3 * s3;
    SubSystem4 * s4;

public:
    Facade(){
        s1 = new SubSystem1("System 1");
        s2 = new SubSystem2("System 2");
        s3 = new SubSystem3("System 3");
        s4 = new SubSystem4("System 4");
    };
    ~Facade(){delete s1;delete s2;delete s3;delete s4;};

    void operation1(){s1->operation();s2->operation();};
    void operation2(){s4->operation();s2->operation();};
};



int main()
{
    Facade * facade = new Facade();

    facade->operation1();facade->operation2();

    delete facade;

    return 0;
}
