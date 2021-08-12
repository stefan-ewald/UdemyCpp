#include "exercise.h"

double array_sum(double *pArray, const unsigned int &length)
{
    double sum = 0.0;
    for (unsigned int i=0; i<length; i++)
    {
        sum += pArray[i];
    }
    return sum;
}

int *array_constructor(const int &value, const unsigned int &length)
{
    int *ret = new int[length];
    for (unsigned int i=0; i<length; i++)
    {
        ret[i] = value;
    }
    return ret;
}
