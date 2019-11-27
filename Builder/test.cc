#include <iostream>
#include "LinuxApplication.h"
#include "Director.h"

/*
    the director control the building process, also make sure the building process step is unchangable, 
    for example: step1 step2 step3 ...
*/

int main(int argc, char ** argv)
{
    printf("builder !\n");

    Director * dire = new Director();
    LinuxApplication * linuxApp = new LinuxApplication();
    dire->create(linuxApp);
    
    delete dire;
    delete linuxApp;

    return 0;
}
