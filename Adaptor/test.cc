#include <iostream>
#include "Adapter.h"

using namespace std;

int main(int argc, char ** argv)
{
    Target * target = new Adapter();
    target->targetReq();

    delete target;
    target = nullptr;

    return 0;
}
