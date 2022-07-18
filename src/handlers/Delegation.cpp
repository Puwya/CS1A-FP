#include <cstdint>
#include <iostream>

#include "../../include/Pixel.h"

int MenuChoice();
void SaveImg(
    Pixel pixel[][WIDTH], std::string &type, const uint16_t &width,
    const uint16_t &height, const uint16_t &intensity, const std::string &FileName);
void MirrorVertically(
    Pixel pixel[][WIDTH], const uint16_t &width, const uint16_t &height);
void MirrorHorizontally(
    Pixel pixel[][WIDTH], const uint16_t &width, const uint16_t &height);
void NegativeImage(Pixel pixel[][WIDTH], const uint16_t &width, const uint16_t &height);

void Delegation(
    Pixel pixel[][WIDTH], uint16_t &width, uint16_t &height, uint16_t &intensity,
    std::string &type) {
  switch (MenuChoice()) {
    case 1: {
      MirrorHorizontally(pixel, width, height);
      SaveImg(pixel, type, width, height, intensity, "SampleHorizontally.ppm");
      break;
    }
    case 2: {
      MirrorVertically(pixel, width, height);
      SaveImg(pixel, type, width, height, intensity, "SampleVertically.ppm");
      break;
    }
    case 3: {
      NegativeImage(pixel, width, height);
      SaveImg(pixel, type, width, height, intensity, "SampleNegative.ppm");
      break;
    }
    case 4: {
      break;
    }
  }
}