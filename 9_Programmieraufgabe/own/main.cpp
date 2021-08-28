#include <iostream>

#include "Matrix.h"

int main()
//int your_main()
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

    double f = 2.0;
    Matrix m5 = m1 * f;
    std::cout << "m5:" << std::endl;
    m5.print_matrix();

    m5 *= f;
    std::cout << "m5:" << std::endl;
    m5.print_matrix();

    double g = 2.0;
    Matrix m6 = m5 / g;
    std::cout << "m6:" << std::endl;
    m6.print_matrix();

    m5 /= g;
    std::cout << "m5:" << std::endl;
    m5.print_matrix();

    Matrix m7 = m1 * m2;
    std::cout << "m7:" << std::endl;
    m7.print_matrix();

    return 0;
}
