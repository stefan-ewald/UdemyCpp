#include <iostream>

int main()
{
    int year = 0;

    std::cout << "Please enter a year: ";
    std::cin >> year;
    std::cout << std::endl;

    bool isLeapYear = false;
    if (year % 4 == 0)
    {
        isLeapYear = (year % 100 == 0 && year % 400 != 0) ? false : true;
    }
    std::cout << "Is leap year: " << std::boolalpha << isLeapYear << std::endl;

    return EXIT_SUCCESS;
}
