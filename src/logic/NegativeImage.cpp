#include <cstdint>

#include "../../include/Pixel.h"

void NegativeImage(Pixel pixel[][WIDTH], const uint16_t &width, const uint16_t &height) {
  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {
      pixel[row][col].R = 255 - pixel[row][col].R;
      pixel[row][col].G = 255 - pixel[row][col].G;
      pixel[row][col].B = 255 - pixel[row][col].B;
    }
  }
}