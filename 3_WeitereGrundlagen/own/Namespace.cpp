#include <iostream>

using std::cout, std::endl;

namespace mySpace
{
static int a{8};
}

int main()
{
    cout << mySpace::a << endl;

    return EXIT_SUCCESS;
}
