
#include <iostream>
#include <string>
#include <fstream>

using std::cout, std::endl;

int main()
{
    std::string str;
    std::string txt;

    std::ifstream ifs;
    ifs.open("D:/_Repos/github/udemy_UdemyCpp/5_STLString/Text.txt");
    if (ifs.is_open())
    {
        while (std::getline(ifs, str))
        {
            txt += str + '\n';
        }
    }
    ifs.close();
    cout << txt << endl;

    return EXIT_SUCCESS;
}
