#include <iostream>

#include "Image.h"

Image::Image() : Image(0, 0)
{
    std::cout << "Created empty Image object" << std::endl;
}

Image::Image(unsigned int width, unsigned int height) : m_width{width}, m_height{height}
{
    std::cout << "Created Image object: width=" << m_width << ", heigth=" << m_height << std::endl;
}

Image::~Image()
{
    std::cout << "Destroyed Image object" << std::endl;
}
