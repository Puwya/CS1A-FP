#include <cstdint>
#include <fstream>
#include <ios>
#include <iostream>
#include <limits>
#include <string>

#include "../../include/Pixel.h"

void ReadImg(
    Pixel pixel[][WIDTH], std::fstream &inFile, const uint16_t &width,
    const uint16_t &height) {
  for (int row = 0; row < height; ++row) {
    for (int col = 0; col < width; col++) {
      pixel[row][col].R = inFile.get();
      pixel[row][col].G = inFile.get();
      pixel[row][col].B = inFile.get();
    }
  }
}