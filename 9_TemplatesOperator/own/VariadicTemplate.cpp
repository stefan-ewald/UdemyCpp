#include <iostream>
#include <string>

template <typename T> T concat(T first)
{
    return first;
}

template <typename T, typename... Args> T concat(T first, Args... args)
{
    return first + concat(args...);
}

int main()
{
    std::string s1{"a"};
    std::string s2{"b"};
    std::string s3{"c"};

    std::cout << concat(s1, s2, s3) << std::endl;

    std::cout << concat(1, 2, 3) << std::endl;

    return EXIT_SUCCESS;
}
