#include "LenovoComputer.h"

using namespace std;

LenovoComputer::LenovoComputer(/* args */)
{
}

LenovoComputer::~LenovoComputer()
{
}


int LenovoComputer::installSystem( AbstractSystem * system )
{
    // cout << " lenovo install system " << endl;
    system->operationSystem();

    return 0;
}