#include <iostream>
#include "Originator.h"
#include "CareTaker.h"

int main(int argc, char ** argv)
{
    Originator * originator = new Originator("Old");
    originator->show();

    CareTaker * pCareTaker = new CareTaker();
    pCareTaker->SetMemento(originator->CreateMemento());

    originator->SetState("New");
    originator->show();

    originator->RestoreToMemento(pCareTaker->GetMemento());
    originator->show();



    delete pCareTaker;
    delete originator;

    return 0;
}