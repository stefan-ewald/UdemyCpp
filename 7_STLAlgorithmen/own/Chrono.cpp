#include <chrono>
#include <iostream>
#include <random>
#include <vector>

using timebase = std::chrono::microseconds;
using std::cout;
using std::endl;

int main()
{
    constexpr int LEN{1'000'000};
    std::vector<int> vec(LEN, 0);

    std::random_device seed_generator;
    std::mt19937 random_generator(42);
    // std::mt19937 random_generator(seed_generator());
    std::uniform_int_distribution<int> random_distribution(-10, 10);

    auto start_time = std::chrono::high_resolution_clock::now();

    for (size_t i = 0; i < LEN; ++i)
    {
        vec[i] = random_distribution(random_generator);
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    double elapsed = std::chrono::duration_cast<timebase>(end_time - start_time).count();

    std::cout << "The programm took " << elapsed << " us" << endl;

    return EXIT_SUCCESS;
}
