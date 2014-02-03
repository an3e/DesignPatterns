#include <iostream>
#include "Singleton.h"

// ----------------------------------------------------------------------------

Singleton* Singleton::s_pInstance = nullptr;

// ----------------------------------------------------------------------------

Singleton::Singleton()
{
    std::cout << "In Constructor of our Singleton." << std::endl;
}

// ----------------------------------------------------------------------------

Singleton::~Singleton()
{
    std::cout << "In Destructor of our Singleton." << std::endl;
}

// ----------------------------------------------------------------------------

Singleton* Singleton::getInstance()
{
    if ( nullptr == s_pInstance )
    {
        s_pInstance = new Singleton();
    }

    std::cout << "s_pInstance=[0x" << std::hex << s_pInstance << "]." << std::endl;

    return s_pInstance;
}

// ----------------------------------------------------------------------------
