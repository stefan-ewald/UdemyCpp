#include <iostream>
#include <string>
#include <cstddef>

int main()
{
    std::string s {"Das ist ein String"};
    std::size_t pos = s.find("hallo");
    bool b = pos == s.npos;

    return EXIT_SUCCESS;
}
