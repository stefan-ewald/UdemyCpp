#pragma once

class Matrix
{
public:
    Matrix() : m_a(0), m_b(0), m_c(0), m_d(0) {}
    Matrix(const double &a, const double &b, const double &c, const double &d) : m_a(a), m_b(b), m_c(c), m_d(d) {}

    Matrix operator+(const Matrix &rhs);
    Matrix &operator+=(const Matrix &rhs);
    Matrix operator-(const Matrix &rhs);
    Matrix &operator-=(const Matrix &rhs);
    Matrix operator*(const double &rhs);
    Matrix &operator*=(const double &rhs);
    Matrix operator*(const Matrix &rhs);
    Matrix &operator*=(const Matrix &rhs);
    Matrix operator/(const double &rhs);
    Matrix &operator/=(const double &rhs);

    void print_matrix() const;

    double get_A() const;
    double get_B() const;
    double get_C() const;
    double get_D() const;

    void set_A(const double &a);
    void set_B(const double &b);
    void set_C(const double &c);
    void set_D(const double &d);

private:
    double m_a;
    double m_b;
    double m_c;
    double m_d;
};
