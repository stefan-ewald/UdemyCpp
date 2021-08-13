#include <iostream>
#include <vector>

using std::cout, std::endl;

int main()
{
    std::vector<int> v(2, 42); // len=2, init_value=42

    cout << "v[0] = " << v[0] << endl;
    cout << "v[1] = " << v[1] << endl;
    //cout << "v[2] = " << v[2] << endl;

    v[0] = 11;
    v.at(1) = -43;

    cout << "v.at(0) = " << v.at(0) << endl;
    cout << "v.at(1) = " << v.at(1) << endl;
    cout << "v.size() = " << v.size() << endl;

    v.push_back(13);
    cout << "v.at(2)" << v.at(2) << endl;
    cout << "v.size() = " << v.size() << endl;

    v.pop_back();
    cout << "v.size() = " << v.size() << endl;

    return EXIT_SUCCESS;
}
