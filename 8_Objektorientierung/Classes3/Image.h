#include <vector>

using uchar = unsigned char;
using GrayscaleMatrix = std::vector<std::vector<uchar>>;

class Image
{
  public:
    // Konstruktor
    Image();
    Image(const unsigned int &width, const unsigned int &height);

    // Destruktor
    ~Image() = default;

    void save_image(const char *file_name) const;

  private:
    unsigned int m_width;
    unsigned int m_height;
    GrayscaleMatrix m_matrix;
};
