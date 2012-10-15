// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Singleton1.h"


int _tmain(int argc, _TCHAR* argv[])
{
    //fails - compilation error as constructor cannot be accessed
    //Singleton1* singleton1 = new Singleton1();


    //bad practice - the implementation of the Singleton could decide
    //               to delete the current object and create a new one
    //               so keeping a pointer around is a bad idea.
    Singleton1* singleton1 = Singleton1::Instance();
    singleton1->SomeRandomMethod();

    //proper way to use Singleton class to call its method
    Singleton1::Instance()->SomeRandomMethod(); 

	return 0;
}

