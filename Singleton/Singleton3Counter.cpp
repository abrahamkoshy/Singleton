#include "stdafx.h"
#include "Singleton3Counter.h"
#include "Singleton3.h"

//this constructor will be called during initialization
//of all static variables
Singleton3Counter::Singleton3Counter()
{
    if (++count == 1)
    {
        Singleton3::_instance = new Singleton3();
    }
}

//the destructor will be called when the application exits
Singleton3Counter::~Singleton3Counter(void)
{
    if (--count == 0)
    {
        delete Singleton3::_instance;
    }
}
