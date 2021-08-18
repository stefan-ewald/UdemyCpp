#include <iostream>

#include "exercise.h"

int main()
{
    Friends friends;

    friends["Jan"] = std::make_pair(20, 80);
    friends["Peter"] = std::make_pair(25, 85);
    friends["Paul"] = std::make_pair(15, 100);

    std::cout << "My oldest friend: " << get_oldest_friend(friends) << std::endl;
    std::cout << "My heaviest friend: " << get_heaviest_friend(friends) << std::endl;

    return EXIT_SUCCESS;
}
