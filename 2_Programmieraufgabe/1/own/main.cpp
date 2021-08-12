#include <iostream>
#include "exercise.h"

using std::cin, std::cout, std::endl;

int main()
{
    // Aufgabe 1
    constexpr int LENGTH = 100;
    double *d = new double[LENGTH];
    for (int i=0; i<LENGTH; i++)
    {
        d[i] = i;
    }
    double sum = array_sum(d, 100);
    cout << sum << endl;
    delete d;
    d = nullptr;

    // Aufgabe 2
    constexpr int SIZE = 3;
    constexpr int VALUE = 5;
    int *array = array_constructor(VALUE, SIZE);
    for (int i=0; i<SIZE; i++)
    {
        cout << array[i] << endl;
    }
    delete array;
    array = nullptr;

    return EXIT_SUCCESS;
}
