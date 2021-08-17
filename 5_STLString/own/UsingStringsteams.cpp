#include <iostream>
#include <sstream>
#include <string>

using std::cout, std::endl, std::cin;

int main()
{
    std::string birthday;

    cout << "Please enter your birthday (dd.mm.yyyy): ";
    cin >> birthday;

    std::stringstream birthday_ss(birthday);
    unsigned int day, month, year;
    char c; // Wegwerf-Character

    birthday_ss >> day >> c >> month >> c >> year;

    cout << "Your birthday is: " << day << "." << month << "." << year << endl;

    return EXIT_SUCCESS;
}
