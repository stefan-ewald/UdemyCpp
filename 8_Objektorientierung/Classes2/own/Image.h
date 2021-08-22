#pragma once

#include <vector>

using uchar = unsigned char;
using GrayscaleMatrix = std::vector<std::vector<uchar>>;

class Image
{
  public:
    // Constructors
    Image();
    Image(unsigned int width) = delete;
    Image(unsigned int width, unsigned int height);

    // Destructor
    ~Image();

  private:
    unsigned int m_width;
    unsigned int m_height;
    GrayscaleMatrix m_matrix;
};
