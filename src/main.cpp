#include <cstdint>
#include <fstream>
#include <iostream>

#include "../include/Pixel.h"

void PrintMenu();
void ReadImg(
    Pixel pixel[][WIDTH], std::fstream &inFile, const uint16_t &width,
    const uint16_t &height);
void SaveImg(
    Pixel pixel[][WIDTH], std::string &type, const uint16_t &width,
    const uint16_t &height, const uint16_t &intensity);
void MirrorHorizontally(
    Pixel pixel[][WIDTH], const uint16_t &width, const uint16_t &height);

int main() {
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
  MirrorHorizontally(pixel, width, height);
  SaveImg(pixel, type, width, height, intensity);
  return 0;
}