#include <iostream>

int main()
{
    const double PI = 3.141592653589793;
    double r = 0.0;

    std::cout << "Please enter the radius of the cirle: ";
    std::cin >> r;
    std::cout << std::endl;
    std::cout << "Perimeter of the cirle: " << 2 * PI * r << std::endl;
    std::cout << "Area of the circle: " << PI * r * r << std::endl;

    return EXIT_SUCCESS;
}
