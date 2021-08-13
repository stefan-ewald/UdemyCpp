#include "exercise.h"

double computation::mean_array_value(const int *array, const std::size_t &length)
{
    double sum = 0.0;
    for (std::size_t i {0}; i < length; ++i)
    {
        sum += array[i];
    }
    return sum/length;
}

double computation::mean_array_value(const double *array, const std::size_t &length)
{
    double sum = 0.0;
    for (std::size_t i {0}; i < length; ++i)
    {
        sum += array[i];
    }
    return sum/length;
}
