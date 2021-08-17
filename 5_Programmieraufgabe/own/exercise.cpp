#include <cstddef>

#include "exercise.h"

uchar hex_xor(const uchar &hex1, const uchar &hex2)
{
    uchar ret = hex1 ^ hex2;
    return ret;
}

ByteArray hex_vector_xor(const ByteArray &vec1, const ByteArray &vec2)
{
    ByteArray ret(vec1.size(), 0);
    if (vec1.size() != vec2.size())
    {
        return ret;
    }
    for (std::size_t i=0; i<vec1.size(); ++i)
    {
        ret[i] = hex_xor(vec1[i], vec2[i]);
    }
    return ret;
}
