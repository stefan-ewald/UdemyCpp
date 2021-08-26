#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "Constructor Base class" << std::endl;
    }

    //virtual ~Base()
    ~Base()
    {
        std::cout << "Destructor Base class" << std::endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        std::cout << "Constructor Derived class" << std::endl;
    }

    //~Derived() override
    ~Derived()
    {
        std::cout << "Destructor Derived class" << std::endl;
    }
};

int main()
{
    {
        Base *a = new Base;
        delete a;
    }
    std::cout << std::endl;
    {
        Base *a = new Derived;
        delete a;
    }

    return EXIT_SUCCESS;
}
