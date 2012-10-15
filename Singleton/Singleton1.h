#pragma once

//GoF implementation of Singleton pattern

class Singleton1
{
public:
    static Singleton1* Instance();

    //random method for demonstration purpose
    void SomeRandomMethod() {};

protected:
    //make sure that external code cannot call the constructor, destructor, copy constructor 
    //or assignment operator
    Singleton1() {};
    ~Singleton1();
    Singleton1(Singleton1& other);
    Singleton1& operator=(Singleton1& rhs);

private:
    //the one and only instance of this class
    static Singleton1* _instance;
};

