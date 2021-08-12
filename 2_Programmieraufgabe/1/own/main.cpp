#include <iostream>
#include "exercise.h"

using std::cin, std::cout, std::endl;

int main()
{
    // Aufgabe 1
    const int length = 100;
    double *d = new double[length];
    for (int i=0; i<length; i++)
    {
        d[i] = i;
    }
    double sum = array_sum(d, 100);
    cout << sum << endl;
    delete d;
    d = nullptr;

    // Aufgabe 2
    const int size = 3;
    const int value = 5;
    int *array = array_constructor(value, size);
    for (int i=0; i<size; i++)
    {
        cout << array[i] << endl;
    }
    delete array;
    array = nullptr;

    return EXIT_SUCCESS;
}
