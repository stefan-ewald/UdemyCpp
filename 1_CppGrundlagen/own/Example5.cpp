#include <iostream>

int main()
{
    int n = 0;
    std::cout << "Please enter a positive number: ";
    std::cin >> n;
    std::cout << std::endl;

    bool isPrime = true;
    if (n < 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    std::cout << "Is prime number: " << std::boolalpha << isPrime << std::endl;

    return EXIT_SUCCESS;
}
