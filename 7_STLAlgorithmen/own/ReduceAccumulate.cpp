#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <random>
#include <vector>

void random_vector(std::vector<int> &vec)
{
    std::random_device seed_generator;
    std::mt19937 random_generator(42);
    // std::mt19937 random_generator(seed_generator());
    std::uniform_int_distribution<int> random_distribution(-10, 10);

    for (auto &val : vec)
    {
        val = random_distribution(random_generator);
    }
}

int main()
{
    constexpr int LEN{3};
    std::vector<int> vecA(LEN, 0);
    std::vector<int> vecB(LEN, 0);
    std::vector<int> vecC(LEN, 0);

    random_vector(vecA);
    random_vector(vecB);

    // Reduce
    int sum_vecA = std::reduce(vecA.begin(), vecA.end());
    std::cout << "Sum vecA = " << sum_vecA << std::endl;

    int sum_vecA_plus2 = std::reduce(vecA.begin(), vecA.end(), 2);
    std::cout << "Sum vecA_plus2 = " << sum_vecA_plus2 << std::endl;

    // Accumulate
    int sum_vecB = std::accumulate(vecB.begin(), vecB.end(), 0);
    std::cout << "Sum vecB = " << sum_vecB << std::endl;

    int sum_vecB_plus2 = std::accumulate(vecB.begin(), vecB.end(), 2);
    std::cout << "Sum vecB_plus2 = " << sum_vecB_plus2 << std::endl;

    std::cout << "vecB = ";
    for (const auto &val : vecB)
    {
        std::cout << val << "   ";
    }
    std::cout << std::endl;

    // Accumulate with Multiplies<int>
    int product_vecB = std::accumulate(vecB.begin(), vecB.end(), 1, std::multiplies<>());
    std::cout << "Product vecB = " << product_vecB << std::endl;

    return EXIT_SUCCESS;
}
