#include <iostream>

using std::cout, std::endl;

void f(int *pNumber)
{
    cout << "(F): pNumber = " << pNumber << endl;
    cout << "(F): &pNumber = " << &pNumber << endl;
}

void g(int *&pNumber)
{
    cout << "(G): pNumber = " << pNumber << endl;
    cout << "(G): &pNumber = " << &pNumber << endl;
}

int main()
{
    int *pNumber = new int {4};

    cout << "(MAIN): pNumber = " << pNumber << endl;
    cout << "(MAIN): &pNumber = " << &pNumber << endl;

    f(pNumber);
    g(pNumber);

    return EXIT_SUCCESS;
}
