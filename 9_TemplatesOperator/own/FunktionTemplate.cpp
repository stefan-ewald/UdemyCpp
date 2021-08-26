#include <iostream>

using std::cout, std::endl;

template <typename T> T max(T value1, T value2)
{
    return value1 > value2 ? value1 : value2;
}

int main()
{
    int a{1};
    int b{4};
    cout << "max = " << max<int>(a, b) << endl;

    float c{2.4f};
    float d{4.5f};
    cout << "max = " << max<float>(c, d) << endl;

    double e{3.89};
    double f{-1.2};
    cout << "max = " << max<double>(e, f) << endl;

    return EXIT_SUCCESS;
}
