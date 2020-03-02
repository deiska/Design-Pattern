#include <iostream>
#include "Leaf.h"
#include "Composite.h"

using namespace std;

// #define DELETE(arg) {/
//     if(arg)/
//     delete arg;/
// }

int main(int argc , char ** argv)
{
    // cout << "Composite Mode !" << endl;

    Composite * pMainWin = new Composite("Main Window");

    Leaf * pL1 = new Leaf("L1");
    Leaf * pL2 = new Leaf("L2");
    Leaf * pL3 = new Leaf("L3");
    Leaf * pL4 = new Leaf("L4");
    Leaf * pL5 = new Leaf("L5");
    Leaf * pL6 = new Leaf("L6");

    Composite * pSecWin = new Composite("Second Window");

    pMainWin->add(pL1);
    pMainWin->add(pSecWin);
    pMainWin->add(pL2);

    pSecWin->add(pL3);
    pSecWin->add(pL4);
    pSecWin->add(pL5);
    pSecWin->add(pL6);

    pMainWin->getChild(2)->operation();


    delete pL1;
    delete pL2;
    delete pL3;
    delete pL4;
    delete pL5;
    delete pL6;

    delete pSecWin;
    delete pMainWin;

    return 0;
}

