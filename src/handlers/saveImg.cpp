#include <cstdint>
#include <fstream>
#include <iostream>
#include <string>

#include "../../include/Pixel.h"

void SaveImg(
    Pixel pixel[][WIDTH], std::string &type, const uint16_t &width,
    const uint16_t &height, const uint16_t &intensity, const std::string &FileName) {
  std::fstream oFile(FileName, std::ios::out);

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