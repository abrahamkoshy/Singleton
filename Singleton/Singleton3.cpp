#include "stdafx.h"
#include "Singleton3.h"


Singleton3* Singleton3::_instance = 0;

Singleton3* Singleton3::Instance()
{
    return _instance;
}

