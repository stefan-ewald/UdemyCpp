#include <iostream>

int main()
{
    float sideLength = 0.0;

    std::cout << "Please enter the side length of a square: ";
    std::cin >> sideLength;
    std::cout << std::endl;

    std::cout << "Square perimeter: " << 4 * sideLength << std::endl;
    std::cout << "Square area: " << sideLength * sideLength << std::endl;

    return 0;
}
