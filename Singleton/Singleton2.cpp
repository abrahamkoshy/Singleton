#include "stdafx.h"
#include "Singleton2.h"


Singleton2& Singleton2::Instance()
{
    static Singleton2 instance;
    return instance;
}

