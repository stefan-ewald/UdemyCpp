#include <iostream>
#include <math.h>

int main()
{
    int a = 0;

    std::cout << "Please enter a number: ";
    std::cin >> a;
    std::cout << std::endl;

    std::cout << "The absolute value is: " << abs(a) << std::endl;

    return EXIT_SUCCESS;
}
