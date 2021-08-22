#include <iostream>
#include <iterator>
#include <random>

#include "exercise.h"

BinaryArray shuffle_till_equal(const BinaryArray &target, const BinaryArray &input)
{
    BinaryArray ba{input};
    int i{0};
    std::random_device seed_gen;

    while (!std::equal(target.begin(), target.end(), ba.begin()))
    {
        if (++i % 1000 == 0)
        {
            std::cout << "Iteration: " << i << std::endl;
        }
        std::shuffle(ba.begin(), ba.end(), std::default_random_engine(seed_gen()));
    }

    return ba;
}

BinaryArray smart_shuffle_till_equal(const BinaryArray &target, const BinaryArray &input)
{
    BinaryArray ba{input};
    int i{0};
    std::random_device seed_gen;
    bool is_equal = false;
    auto first = ba.begin();
    auto last = ba.end();

    while (!is_equal)
    {
        if (++i % 1000 == 0)
        {
            std::cout << "Iteration: " << i << std::endl;
        }
        std::shuffle(first, last, std::default_random_engine(seed_gen()));

        int index = std::distance(ba.begin(), first);

        if (*first == target[index])
        {
            ++first;
        }

        if (first == last)
        {
            is_equal = true;
        }
    }

    return ba;
}
