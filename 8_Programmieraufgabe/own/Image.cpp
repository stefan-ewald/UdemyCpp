#include <cstdlib>
#include <cstring>
#include <iostream>

#include "Image.h"

Image::Image() : m_width(0), m_height(0), m_matrix(GrayscaleMatrix(m_width, std::vector<uchar>(m_height, 0)))
{
    std::cout << "Created empty image object!" << std::endl;
}

Image::Image(const unsigned int width, const unsigned int height)
    : m_width(width), m_height(height), m_matrix(GrayscaleMatrix(m_width, std::vector<uchar>(m_height, 0)))
{
    std::cout << "Created image object with shape=(" << m_width << "," << m_height << ")!" << std::endl;
    std::cout << "Matrix size: (" << m_matrix.size() << "," << m_matrix[0].size() << ")" << std::endl;
}

Image::~Image()
{
    std::cout << "Image object destroyed!" << std::endl;
}

unsigned int Image::get_width() const
{
    return m_width;
}

unsigned int Image::get_height() const
{
    return m_height;
}

void Image::set_width(unsigned int new_width)
{
    m_width = new_width;
}

void Image::set_height(unsigned int new_height)
{
    m_height = new_height;
}

void Image::save_image(const char *file_name) const
{
    FILE *f;

    unsigned int num_bytes = 3 * m_width * m_height;
    uchar *img = (uchar *)(malloc(num_bytes));
    memset(img, 0, num_bytes);

    int filesize = 54 + 3 * m_width * m_height;

    for (unsigned int x = 0; x < m_width; ++x)
    {
        for (unsigned int y = 0; y < m_height; y++)
        {
            img[(x + y * m_width) * 3 + 2] = m_matrix[x][y] % 256;
            img[(x + y * m_width) * 3 + 1] = m_matrix[x][y] % 256;
            img[(x + y * m_width) * 3 + 0] = m_matrix[x][y] % 256;
        }
    }

    uchar bmpfileheader[14] = {'B', 'M', 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0};
    uchar bmpinfoheader[40] = {40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 24, 0};
    uchar bmppad[3] = {0, 0, 0};

    bmpfileheader[2] = (uchar)(filesize);
    bmpfileheader[3] = (uchar)(filesize >> 8);
    bmpfileheader[4] = (uchar)(filesize >> 16);
    bmpfileheader[5] = (uchar)(filesize >> 24);

    bmpinfoheader[4] = (uchar)(m_width);
    bmpinfoheader[5] = (uchar)(m_width >> 8);
    bmpinfoheader[6] = (uchar)(m_width >> 16);
    bmpinfoheader[7] = (uchar)(m_width >> 24);
    bmpinfoheader[8] = (uchar)(m_height);
    bmpinfoheader[9] = (uchar)(m_height >> 8);
    bmpinfoheader[10] = (uchar)(m_height >> 16);
    bmpinfoheader[11] = (uchar)(m_height >> 24);

    f = fopen(file_name, "wb");
    fwrite(bmpfileheader, 1, 14, f);
    fwrite(bmpinfoheader, 1, 40, f);

    for (unsigned int i = 0; i < m_height; i++)
    {
        fwrite(img + (m_width * (m_height - i - 1) * 3), 3, m_width, f);
        fwrite(bmppad, 1, (4 - (m_width * 3) % 4) % 4, f);
    }

    fclose(f);
}

void Image::clear_image()
{
    m_height = 0;
    m_width = 0;
    m_matrix.clear();
}

void Image::set_pixel(unsigned int x, unsigned int y, uchar value)
{
    m_matrix.at(x).at(y) = value;
}

void Image::resize_image(unsigned int new_width, unsigned int new_height)
{
    for (auto col : m_matrix)
    {
        col.resize(new_height, 0);
    }
    m_matrix.resize(new_width, std::vector<uchar>(new_height, 0));
    m_height = new_height;
    m_width = new_width;
}

void Image::fill_image(uchar value)
{
    for (auto col: m_matrix)
    {
        col.assign(m_height, value);
    }
}
