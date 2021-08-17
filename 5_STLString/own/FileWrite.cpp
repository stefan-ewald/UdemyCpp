
#include <iostream>
#include <string>
#include <fstream>

using std::cout, std::endl;

int main()
{
    std::string str;
    std::string txt;

    std::ifstream ifs;
    ifs.open("../Text.txt");
    if (ifs.is_open())
    {
        while (std::getline(ifs, str))
        {
            txt += str + '\n';
        }
    }
    ifs.close();
    cout << txt << endl;

    std::string str1 = "eins";
    std::string rpl = "one";
    auto idx = txt.find(str1);
    txt.replace(idx, str1.size(), rpl);
    cout << txt << endl;

    std::ofstream ofs;
    ofs.open("../TextOutput.txt");
    if (ofs.is_open())
    {
        ofs << txt;
    }
    ofs.close();

    return EXIT_SUCCESS;
}
