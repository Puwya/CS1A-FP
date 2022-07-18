#include <cstdint>
#include <fstream>
#include <iostream>

#include "../include/Pixel.h"

void ReadImg(
    Pixel pixel[][WIDTH], std::fstream &inFile, const uint16_t &width,
    const uint16_t &height);
void Delegation(
    Pixel pixel[][WIDTH], uint16_t &width, uint16_t &height, uint16_t &intensity,
    std::string &type);

int main() {
  std::string FileName;
  std::string type;
  uint16_t width;
  uint16_t height;
  uint16_t intensity;

  std::fstream inFile("Sample.ppm", std::ios::in);
  std::getline(inFile, type);
  inFile >> width >> height >> intensity;
  inFile.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  Pixel pixel[426][640];
  ReadImg(pixel, inFile, width, height);
  inFile.close();
  Delegation(pixel, width, height, intensity, type);
  return 0;
}