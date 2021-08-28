#pragma once

template <typename T> class DynamicArray
{
public:
    DynamicArray();
    DynamicArray(const T &value; const std::size_t &length);
    ~DynamicArray();

    void push_back(const T &value);
    void pop_back();

    std::size_t get_length() const;

private:
    std::size_t m_length;
    std::size_t m_capacity;
    T *m_data;
};

template <typename T> DynamicArray<T>::DynamicArray()
    : m_length(0), m_capacity(1), m_data(new T[m_capacity])
{
}

template <typename T>
DynamicArray<T>::DynamicArray(const T &value; const std::size_t &length)
    : m_length(length), m_capacity(length), m_data(new T[m_capacity])
{
}
