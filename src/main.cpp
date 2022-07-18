#include <cstdint>
#include <fstream>
#include <iostream>

#include "../include/Pixel.h"

void PrintMenu();
void ReadImg(
    Pixel pixel[][WIDTH], std::fstream &inFile, uint16_t &width, uint16_t &height);
void saveImg(
    Pixel pixel[][WIDTH], std::string &type, uint16_t &width, uint16_t &height,
    uint16_t &intensity);

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
  saveImg(pixel, type, width, height, intensity);
  return 0;
}