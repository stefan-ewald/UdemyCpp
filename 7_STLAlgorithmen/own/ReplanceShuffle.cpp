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

bool replace_even(int i)
{
    return i % 2 == 0;
}

int main()
{
    constexpr int LEN{3};
    std::vector<int> vecC(LEN, 0);
    random_vector(vecC);

    // Replace
    std::cout << "vecC = ";
    std::copy(vecC.begin(), vecC.end(), std::ostream_iterator<int>(std::cout, "   "));
    std::cout << std::endl;

    std::replace(vecC.begin(), vecC.end(), 6, 46);

    std::cout << "vecC = ";
    std::copy(vecC.begin(), vecC.end(), std::ostream_iterator<int>(std::cout, "   "));
    std::cout << std::endl;

    // std::replace_if(vecC.begin(), vecC.end(), replace_even, 33);
    std::replace_if(vecC.begin(), vecC.end(), [](int val) -> bool { return val % 2 == 0; }, 33);

    std::cout << "vecC = ";
    std::copy(vecC.begin(), vecC.end(), std::ostream_iterator<int>(std::cout, "   "));
    std::cout << std::endl;

    // Shuffle
    std::cout << "vecC = ";
    std::copy(vecC.begin(), vecC.end(), std::ostream_iterator<int>(std::cout, "   "));
    std::cout << std::endl;

    std::random_device seed_generator;
    std::mt19937 random_generator(42);
    std::shuffle(vecC.begin(), vecC.end(), random_generator);

    std::cout << "vecC = ";
    std::copy(vecC.begin(), vecC.end(), std::ostream_iterator<int>(std::cout, "   "));
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
