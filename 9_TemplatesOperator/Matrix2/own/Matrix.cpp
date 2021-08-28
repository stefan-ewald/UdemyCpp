#include <iostream>

#include "Matrix.h"

Matrix Matrix::operator+(const Matrix &rhs)
{
    return Matrix(m_a + rhs.get_A(), m_b + rhs.get_B(), m_c + rhs.get_C(), m_d + rhs.get_D());
}

Matrix &Matrix::operator+=(const Matrix &rhs)
{
    m_a += rhs.get_A();
    m_b += rhs.get_B();
    m_c += rhs.get_C();
    m_d += rhs.get_D();
    return *this;
}

Matrix Matrix::operator-(const Matrix &rhs)
{
    return Matrix(m_a - rhs.get_A(), m_b - rhs.get_B(), m_c - rhs.get_C(), m_d - rhs.get_D());
}

Matrix &Matrix::operator-=(const Matrix &rhs)
{
    m_a -= rhs.get_A();
    m_b -= rhs.get_B();
    m_c -= rhs.get_C();
    m_d -= rhs.get_D();
    return *this;
}

void Matrix::print_matrix() const
{
    std::cout << m_a << ", " << m_b << ", " << std::endl << m_c << ", " << m_d << std::endl << std::endl;
}

double Matrix::get_A() const
{
    return m_a;
}

double Matrix::get_B() const
{
    return m_b;
}

double Matrix::get_C() const
{
    return m_c;
}

double Matrix::get_D() const
{
    return m_d;
}

void Matrix::set_A(const double &a)
{
    m_a = a;
}

void Matrix::set_B(const double &b)
{
    m_b = b;
}

void Matrix::set_C(const double &c)
{
    m_c = c;
}

void Matrix::set_D(const double &d)
{
    m_d = d;
}
