#include <iostream>

using std::cout, std::endl;

int main()
{
    int *p = new int {4};
    // Alternative: int *p = new int; *p = 4;

    cout << "Address of p = " << p << endl;
    cout << "Referenced value of p = " << *p << endl;

    delete p;
    p = nullptr;

    return EXIT_SUCCESS;
}
