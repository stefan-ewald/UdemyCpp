#pragma once
#include <cstddef>

namespace computation
{

/**
 * @brief A simple mean value calculation.
 *
 * @author My Name
 * @param array The given array.
 * @param length The length of the given array.
 * @return The mean value of the given array.
 */
double mean_array_value(const int *array, const std::size_t &length);

double mean_array_value(const double *array, const std::size_t &length);

struct Dataset
{
    double mean_array_a;
    double mean_array_b;
};

} // namespace computation
