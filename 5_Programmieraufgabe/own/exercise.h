#pragma once

#include <vector>

using uchar = unsigned char;
using ByteArray = std::vector<uchar>;

uchar hex_xor(const uchar &hex1, const uchar &hex2);

ByteArray hex_vector_xor(const ByteArray &vec1, const ByteArray &vec2);
