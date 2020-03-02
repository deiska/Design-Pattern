#include <iostream>
#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"
#include "Decorator.h"

using namespace std;

int main(int argc, char ** argv)
{
    cout << "Decorator mode !" << endl;

    Component * componnet1 = new ConcreteComponent("Concrete Componnet 1");

    Decorator * decorator1 = new ConcreteDecorator("Concrete Decorator 1");
    decorator1->setComponent(componnet1);
    decorator1->operation();

    delete decorator1;
    delete componnet1;
    
    return 0;
}