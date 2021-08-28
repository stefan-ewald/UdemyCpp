#include <iostream>

#include "Matrix.h"

int main()
{
    Matrix m1(1.0, 2.0, 3.0, 4.0);
    std::cout << "m1:" << std::endl;
    m1.print_matrix();

    Matrix m2(1.0, 1.0, 1.0, 1.0);
    std::cout << "m2:" << std::endl;
    m2.print_matrix();

    Matrix m3 = m1 + m2;
    std::cout << "m3:" << std::endl;
    m3.print_matrix();

    m2 += m1;
    std::cout << "m2:" << std::endl;
    m2.print_matrix();

    Matrix m4 = m1 - m2;
    std::cout << "m4:" << std::endl;
    m4.print_matrix();

    return EXIT_SUCCESS;
}
