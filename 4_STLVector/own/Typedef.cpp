#include <iostream>
#include <vector>
#include <cstddef>

// typedef
//      TYPE                            ALIAS
typedef std::vector<int>                IntVector;
typedef std::vector<std::vector<int>>   IntMatrix;

// using
using DoubleMatrix = std::vector<std::vector<double>>;

// using (c++ 11) is better than typedef (c)
// they are equivalent (except with templates)

int main()
{
    IntVector v;
    std::vector<int> v1;

    return EXIT_SUCCESS;
}
