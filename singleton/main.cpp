#include <iostream>

#include "Singleton.h"

using namespace std;

int main()
{
    cout << "Hello, singleton design pattern!" << endl;

    Singleton *pObj_1 = Singleton::getInstance();
    Singleton *pObj_2 = Singleton::getInstance();
    Singleton *pObj_3 = Singleton::getInstance();
    Singleton *pObj_4 = Singleton::getInstance();

    return 0;
}
