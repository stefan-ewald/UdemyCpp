#include <iostream>
#include <vector>
#include <cstddef>

#include "exercise.h"

using std::cout, std::endl;

int main()
{
    Matrix m(3, std::vector<double>(3, 0));

    // Aufgabe 1
    for (std::size_t i = 0; i < m.size(); ++i)
    {
        for (std::size_t j = 0; j < m[i].size(); ++j)
        {  
            m[i][j] = i + j;
        }
    }
    print_matrix(m);

    // Aufgabe 2
    std::vector<double> max = max_row_values(m);
    cout << endl;
    for (auto e: max)
    {
        cout << e << endl;
    }

    // Aufgabe 3
    std::vector<double> v {2, 4, 6, 1, 9, 3};
    cout << endl;
    for (auto e: v)
    {
        cout << e << " ";
    }
    cout << endl;
    double max_val = sort_and_max(v);
    for (auto e: v)
    {
        cout << e << " ";
    }
    cout << endl;
    cout << "Max: " << max_val << endl;

    return EXIT_SUCCESS;
}
