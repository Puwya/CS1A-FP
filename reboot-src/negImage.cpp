#include "main.hpp"

void negImage(char r[width][height], char g[width][height], char b[width][height])
{
    std::string outFile {"negImage.ppm"};
    for(size_t i {0}; i < width; i++)
    {
        for(size_t j {0}; j < height; j++)
        {
            r[i][j] = 255 - r[i][j];
            g[i][j] = 255 - g[i][j];
            b[i][j] = 255 - b[i][j];
        }
    }
    saveImage(outFile, r, g, b);
}