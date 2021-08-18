#include <iostream>
#include <vector>
#include <random>

int main()
{
    constexpr int LEN{10};
    std::vector<int> vec(LEN, 0);

    std::random_device seed_generator;
    std::mt19937 random_generator(42);
    // std::mt19937 random_generator(seed_generator());
    std::uniform_int_distribution<int> random_distribution(-10, 10);

    for (size_t i = 0; i < LEN; ++i)
    {
        vec[i] = random_distribution(random_generator);
    }

    // ....

    for (size_t i = 0; i < LEN; ++i)
    {
        std::cout << "vec[" << i << "]: " << vec[i] << std::endl;
    }

    return EXIT_SUCCESS;
}
