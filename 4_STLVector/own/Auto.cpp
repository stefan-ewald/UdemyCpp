#include <iostream>
#include <vector>
#include <cstddef>
#include <numeric>

using std::cout, std::endl;

int main()
{
    std::vector<int> v(10, 0);
    std::fill(v.begin(), v.end(), 5);

    std::vector<int>::const_iterator it = v.begin();
    while (it != v.end())
    {
        cout << "it = " << *it << endl;
        ++it;
    }

    std::iota(v.begin(), v.end(), 0);
    for (auto it1 = v.begin(); it1 != v.end(); ++it1)
    {
        cout << "it1 = " << *it1 << endl;
    }

    // auto wird nur durch den Datentyp ersetzt, keine Qualifier.
    // Folgende Fälle sind also möglich:
    // 1) auto val : vec => int val : vec
    // 2) auto &val : vec => int& val : vec
    // 3) const auto &val : vec => const int &val : vec
    // 4) const auto val : vec => const int val : vec
    for(const auto &e: v)
    {
        cout << e << endl;
    }

    return EXIT_SUCCESS;
}
