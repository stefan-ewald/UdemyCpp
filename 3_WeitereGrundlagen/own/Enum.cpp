#include <iostream>

using std::cout, std::endl;

// Better than just enum!
enum class Level
{
    STUDENT,
    TUTOR,
    INSTRUCTOR,
    ADMIN
};

struct MapEntry
{
    int key;
    int value;
};

int main()
{
    Level x = Level::ADMIN;
    Level y{Level::STUDENT};
    switch (y)
    {
    case Level::ADMIN:
    {
        cout << "ADMIN" << endl;
        break;
    }
    default:
    {
        cout << "Something else" << endl;
    }
    }

    int i{1};
    cout << i << endl;

    int j[] {1, 10, 100};
    cout << *(j+1) << endl;

    MapEntry m {30, 200};
    cout << m.key << endl;

    return EXIT_SUCCESS;
}
