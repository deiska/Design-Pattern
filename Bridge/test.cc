#include <iostream>
#include "LinuxSystem.h"
#include "LenovoComputer.h"

using namespace std;

int main(int argc, char ** argv)
{
    AbstractSystem * abSystem = new LinuxSystem();

    AbstractComputer * abComputer = new LenovoComputer();

    abComputer->installSystem(abSystem);

    if (abSystem != nullptr)
    {
        delete abSystem;
        abSystem = nullptr;
    }
    
    if (abComputer != nullptr)
    {
        delete abComputer;
        abComputer = nullptr;
    }
    

    return 0;
}

