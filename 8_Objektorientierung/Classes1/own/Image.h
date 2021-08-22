#pragma once

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
};
