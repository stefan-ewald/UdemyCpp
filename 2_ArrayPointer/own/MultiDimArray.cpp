#include <iostream>

using std::cout, std::endl;

int main()
{
    const char title1[] = "Meine ";
    const char title2[] = {'M', 'a', 't', 'r', 'i', 'x', ':', '\0'};
    const int rows = 3;
    const int cols = 2;
    float v[rows][cols] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    cout << title1 << title2 << endl;
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return EXIT_SUCCESS;
}
