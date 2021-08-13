#include <iostream>
#include <vector>
#include <cstddef>
#include <numeric>
#include <algorithm>

using std::cout, std::endl;

void print_vector_int(const std::vector<int> &v)
{
    for (std::size_t i=0; i<v.size(); ++i)
    {
        cout << "v[" << i << "] = " << v.at(i) << endl;
    }
    cout << endl;
}

bool is_odd(const int &i)
{
    return (i % 2);
}

int main()
{
    std::vector<int> v(10, 0);

    std::iota(v.begin(), v.end(), 0);
    print_vector_int(v);

    // std::remove() moves the elements to be deleted at the end and returns an iterator at the position of the first to be deleted element
    // std::erase() deletes the given elements
    // therefore it's called erase-remove-idiom
    v.erase(std::remove(v.begin(), v.end(), 2), v.end());
    print_vector_int(v);

    // remove_if with user definded selector
    v.erase(std::remove_if(v.begin(), v.end(), is_odd), v.end());
    print_vector_int(v);

    return EXIT_SUCCESS;
}
