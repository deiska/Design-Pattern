#include <iostream>
#include "Singleton.h"
#include "StaticSingleton.h"

using namespace std;

Singleton * Singleton::m_instance = nullptr;

int main()
{
	cout << "singleton !" << endl;

	// Singleton * sgl = Singleton::getInstance();

	StaticSingleton * sglt = StaticSingleton::getInstance();

	return 0;
}
