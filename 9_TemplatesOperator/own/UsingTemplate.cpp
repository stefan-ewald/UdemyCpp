#include <iostream>
#include <map>
#include <vector>

using std::cout, std::endl;

using Id = int;

template <typename T>
using UserAccout = std::map<Id, std::vector<T>>;

int main()
{
    UserAccout<int> a1;

    a1.insert({4, {2, 4}});

    cout << "a1[4][0] = " << a1[4][0] << endl;

    return EXIT_SUCCESS;
}
