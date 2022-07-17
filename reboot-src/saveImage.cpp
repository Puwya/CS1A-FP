#include "main.hpp"

void saveImage(std::string outFile, char r[width][height], char g[width][height], char b[width][height])
{
    std::fstream myppmFile;
    myppmFile.open(outFile, std::ios::out);
    myppmFile << "P6\n" << width << " " << height << "\n" << maxValue << "\n";
    for(size_t i {0}; i < width; i++)
    {
        for(size_t j {0}; j < height; j++)
        {
            myppmFile << g[i][j];
            myppmFile << b[i][j];
            myppmFile << r[i][j];
        }
    }
    myppmFile.close();
}