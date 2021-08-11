#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int modulo(int num, int mod)
{
    // Assumptions: num > 0, mod > 0, num >= mod
    while (num - mod >= 0)
    {
        num -= mod;
    }

    return num;
}

int main()
{
    int num = 0;
    int mod = 1;
    cout << "Please enter a number: ";
    cin >> num;
    cout << endl;
    cout << "Please enter a modulo: ";
    cin >> mod;
    cout << endl;

    cout << "Number % modulo = " << modulo(num, mod) << endl;
    return EXIT_SUCCESS;
}
