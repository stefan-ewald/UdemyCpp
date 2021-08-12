#include <iostream>

using std::cout, std::endl;

int main()
{
    unsigned int size = 10;

    //int a[10] = {}; // allowed
    //int b[size] = {}; // forbidden by c++ standard
    int *p = new int[size];

    for (int i=0; i<size; i++)
    {
        p[i] = i;
    }

    for (int i=0; i<size; i++)
    {
        cout << p[i] << endl;
    }

    //int x = sizeof(p);
    //cout << x << endl;

    delete[] p;
    p = nullptr;

    return EXIT_SUCCESS;
}
