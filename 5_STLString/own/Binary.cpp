#include <bitset>
#include <iostream>

int main()
{
    // Binary
    std::bitset<8> my_byte1{"00011101"};
    std::bitset<8> my_byte2{"10010101"};

    std::cout << "b1 = " << my_byte1 << std::endl;
    std::cout << "b2 = " << my_byte2 << std::endl;

    std::cout << "b1 AND b2: " << (my_byte1 & my_byte2) << std::endl;
    std::cout << "b1 OR b2: " << (my_byte1 | my_byte2) << std::endl;
    std::cout << "b1 XOR b2: " << (my_byte1 ^ my_byte2) << std::endl;
    std::cout << "NOT b1: " << ~my_byte1 << std::endl;

    // Hex
    unsigned char hex1 = 0x01; // 0000 0001
    unsigned char hex2 = 0xff; // 1111 1111

    std::cout << "hex1 = 0x" << std::hex << static_cast<int>(hex1) << std::endl;
    std::cout << "hex2 = 0x" << std::hex << static_cast<int>(hex2) << std::endl;

    // Binary
    unsigned char bin1 = 0b00011101;
    unsigned char bin2 = 0b10010101;

    std::cout << "bin1 = 0x" << std::hex << static_cast<int>(bin1) << std::endl;
    std::cout << "bin2 = 0x" << std::hex << static_cast<int>(bin2) << std::endl;

    return EXIT_SUCCESS;
}
