#include <iostream>
#include <algorithm>

#include "exercise.h"

using std::cout, std::endl;

void print_matrix(const Matrix &m)
{
    for (const auto &i: m)
    {
        for (const auto &j: i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

std::vector<double> max_row_values(const Matrix &m)
{
    std::vector<double> max;

    for (const auto &i: m)
    {
        double row_max = 0.0;
        for (const auto &j: i)
        {
            if (j > row_max)
            {
                row_max = j;
            }
        }
        max.push_back(row_max);
    }

    return max;
}

double sort_and_max(std::vector<double> &v)
{
    std::sort(v.begin(), v.end());
    return *std::max_element(v.begin(), v.end());
}
