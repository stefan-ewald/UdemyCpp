#include "exercise.h"

std::string get_oldest_friend(const Friends &friends)
{
    std::string name;
    int age = -1;

    for (const auto &val : friends)
    {
        std::pair<int, int> p = val.second;
        if (p.first > age)
        {
            age = p.first;
            name = val.first;
        }
    }

    return name;
}

std::string get_heaviest_friend(const Friends &friends)
{
    std::string name;
    int weight = -1;

    for (const auto &val : friends)
    {
        std::pair<int, int> p = val.second;
        if (p.second > weight)
        {
            weight = p.second;
            name = val.first;
        }
    }

    return name;
}
