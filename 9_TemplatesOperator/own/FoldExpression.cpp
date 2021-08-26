#include <iostream>
#include <string>

template <typename T, typename... Args>
T concat(Args... args)
{
    return (args + ...);
}

int main()
{
    std::string s1{"a"};
    std::string s2{"b"};
    std::string s3{"c"};

    std::cout << concat<std::string>(s1, s2, s3) << std::endl;

    std::cout << concat<int>(1, 2, 3) << std::endl;

    return EXIT_SUCCESS;
}
