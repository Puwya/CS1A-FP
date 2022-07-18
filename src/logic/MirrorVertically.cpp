#include <cstdint>

#include "../../include/Pixel.h"

void MirrorVertically(
    Pixel pixel[][WIDTH], const uint16_t &width, const uint16_t &height) {
  for (int row = 0; row < height / 2; row++) {
    for (int col = 0; col < width; col++) {
      pixel[row][col] = pixel[height - row][col];
    }
  }
}