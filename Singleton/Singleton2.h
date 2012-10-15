#pragma once

//Meyers implementation of Singleton pattern (Effective C++)

class Singleton2
{
public:
    static Singleton2& Instance();

    //random method for demonstration purpose
    void SomeRandomMethod() {};

private:
    //make sure that external code cannot call the constructor, destructor, copy constructor 
    //or assignment operator
    Singleton2() {};
    ~Singleton2() {};
    Singleton2(Singleton2& other);
    Singleton2& operator=(Singleton2& rhs);
};

