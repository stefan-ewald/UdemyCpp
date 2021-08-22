#include <chrono>
#include <iostream>
#include <random>
#include <vector>

#include "exercise.h"

int main()
{
    // Aufgabe 1

    std::cout << "Exercise 1: " << std::endl;

    std::random_device seed_gen;
    std::bernoulli_distribution bernoulli_dist(0.5);

    BinaryArray target(20, false);
    std::generate(target.begin(), target.end(), [&] { return bernoulli_dist(seed_gen); });

    std::cout << "target = ";
    std::copy(target.begin(), target.end(), std::ostream_iterator<bool>(std::cout, "   "));
    std::cout << std::endl;

    BinaryArray input(target.begin(), target.end());
    std::shuffle(input.begin(), input.end(), std::default_random_engine(seed_gen()));

    std::cout << "input  = ";
    std::copy(input.begin(), input.end(), std::ostream_iterator<bool>(std::cout, "   "));
    std::cout << std::endl;

    // Aufgabe 2

    std::cout << std::endl <<  "Exercise 2 " << std::endl;

    auto start_time = std::chrono::high_resolution_clock::now();
    BinaryArray result = shuffle_till_equal(target, input);
    auto end_time = std::chrono::high_resolution_clock::now();
    double elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
    bool is_equal = std::equal(target.begin(), target.end(), result.begin());

    std::cout << "result = ";
    std::copy(result.begin(), result.end(), std::ostream_iterator<bool>(std::cout, "   "));
    std::cout << std::endl;
    std::cout << "is_equal = " << is_equal << std::endl;
    std::cout << "elapsed = " << elapsed << "us" << std::endl;

    // Aufgabe 3

    std::cout << std::endl <<  "Exercise 3 " << std::endl;

    start_time = std::chrono::high_resolution_clock::now();
    result = smart_shuffle_till_equal(target, input);
    end_time = std::chrono::high_resolution_clock::now();
    elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
    is_equal = std::equal(target.begin(), target.end(), result.begin());

    std::cout << "result = ";
    std::copy(result.begin(), result.end(), std::ostream_iterator<bool>(std::cout, "   "));
    std::cout << std::endl;
    std::cout << "is_equal = " << is_equal << std::endl;
    std::cout << "elapsed = " << elapsed << "us" << std::endl;

    return EXIT_SUCCESS;
}
