#pragma once

//this class guarantees that the Singleton3 class will be instantiated
//before its first use and deleted after its last use
class Singleton3Counter
{
public:
    Singleton3Counter();
    ~Singleton3Counter();

private:
    int count;
};

//forces the creation of a Singleton3 object at application startup
static Singleton3Counter singleton3Counter;
