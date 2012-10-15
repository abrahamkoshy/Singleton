#pragma once

//Eager initilization implementation of Singleton pattern

class Singleton3
{
public:
    static Singleton3* Instance();

    //random method for demonstration purpose
    void SomeRandomMethod() {};

protected:
    //make sure that external code cannot call the constructor, destructor, copy constructor 
    //or assignment operator
    Singleton3() {};
    ~Singleton3() {};
    Singleton3(const Singleton3& other);
    Singleton3& operator=(const Singleton3& rhs);

private:
    //the one and only instance of this class
    static Singleton3* _instance;
    friend class Singleton3Counter;
};

