#include <cstdint>
#include <fstream>
#include <iostream>
#include <string>

#include "../../include/Pixel.h"

void saveImg(
    Pixel pixel[][WIDTH], std::string &type, uint16_t &width, uint16_t &height,
    uint16_t &intensity) {
  std::fstream oFile("Recreated.ppm", std::ios::out);

  oFile << type << "\n";
  oFile << width << " " << height << "\n";
  oFile << intensity << "\n";

  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {
      oFile << pixel[row][col].R;
      oFile << pixel[row][col].G;
      oFile << pixel[row][col].B;
    }
  }
}