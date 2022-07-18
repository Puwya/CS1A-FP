#include <cstdint>

#include "../../include/Pixel.h"

void MirrorVertically(
    Pixel pixel[][WIDTH], const uint16_t &width, const uint16_t &height) {
  for (int row = 0; row < height; row++) {
    for (int col = width; col > width / 2; col--) {
      pixel[row][col] = pixel[row][width - col];
    }
  }
}