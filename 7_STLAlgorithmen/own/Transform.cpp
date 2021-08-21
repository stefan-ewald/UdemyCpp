#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int increment(int i)
{
    return ++i;
}

int main()
{
    std::vector<int> vecA(10, 3);
    std::vector<int> vecB(10, 7);
    std::vector<int> vecC(10, 0);

    // Save in C (binary function)
    /*
    std::transform(vecA.begin(), vecA.end(), vecB.begin(), vecC.begin(), std::plus<>());
    for (const auto &val : vecC)
    {
        std::cout << val << std::endl;
    }
    */

    // Save in A (binary function)
    /*
    std::transform(vecA.begin(), vecA.end(), vecB.begin(), vecA.begin(), std::plus<>());
    for (const auto &val : vecA)
    {
        std::cout << val << std::endl;
    }
    */

    // Save in C (unary function)

    std::transform(vecA.begin(), vecA.end(), vecC.begin(), increment);
    for (const auto &val : vecC)
    {
        std::cout << val << std::endl;
    }

    return EXIT_SUCCESS;
}
