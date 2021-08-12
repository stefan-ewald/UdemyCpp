#include <iostream>

using std::cin, std::cout, std::endl;

int main()
{
    const unsigned int len = 3;
    float v1[len] = {};

    cout << "Please enter the array values: ";
    for (unsigned int i=0; i<len; i++)
    {
        std::cin >> v1[i];
    }
    cout << endl;

    return EXIT_SUCCESS;
}
