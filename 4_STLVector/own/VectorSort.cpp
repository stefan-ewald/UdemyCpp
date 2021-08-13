#include <iostream>
#include <vector>
#include <cstddef>
#include <numeric>
#include <algorithm>

using std::cout, std::endl;

void print_vector_double(const std::vector<double> &v)
{
    for (std::size_t i=0; i<v.size(); ++i)
    {
        cout << "v[" << i << "] = " << v.at(i) << endl;
    }
    cout << endl;
}

bool sortDescending(const double &i, const double &j)
{
    return i > j;
}

bool sortAscending(const double &i, const double &j)
{
    return i < j;
}

int main()
{
    std::vector<double> v(10, 0);

    std::iota(v.begin(), v.end(), 3.0);
    print_vector_double(v);

    std::sort(v.begin(), v.end(), sortDescending);
    print_vector_double(v);

    std::sort(v.begin(), v.end(), sortAscending);
    print_vector_double(v);

    std::sort(v.begin(), v.end(), sortDescending);
    print_vector_double(v);

    std::sort(v.begin(), v.end());
    print_vector_double(v);

    return EXIT_SUCCESS;
}
