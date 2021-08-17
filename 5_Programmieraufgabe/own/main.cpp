#include <cstddef>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "exercise.h"

using std::cout, std::endl;

int main()
{
    std::ifstream ifs;
    ifs.open("../text.txt");
    std::string content;
    ifs >> content;
    ifs.close();
    cout << "Content: " << content << endl;
    cout << endl;

    ByteArray plain_text(content.begin(), content.end());
    ByteArray key(8, 0xff);
    ByteArray cipher_text = hex_vector_xor(plain_text, key);

    for (std::size_t i = 0; i != cipher_text.size(); ++i)
    {
        cout << "Cipher[" << i << "]: " << cipher_text[i] << endl;
    }
    cout << endl;

    ByteArray message = hex_vector_xor(cipher_text, key);
    for (std::size_t i = 0; i != message.size(); ++i)
    {
        cout << "Message[" << i << "]: " << message[i] << endl;
    }
    cout << endl;

    return EXIT_SUCCESS;
}
