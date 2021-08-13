#include <iostream>
#include <vector>
#include <cstddef>

using std::cout, std::endl;

int main()
{
    constexpr std::size_t COLS {3};
    constexpr std::size_t ROWS {5};

    std::vector<std::vector<int>> v(ROWS, std::vector<int>(COLS, 0));

    for (std::size_t i=0; i<v.size(); ++i)
    {
        for (std::size_t j=0; j<v.at(i).size(); ++j)
        {
            cout << v.at(i).at(j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "v.size() = " << v.size() << endl;
    cout << "v.capacity() = " << v.capacity() << endl;

    return EXIT_SUCCESS;
}
