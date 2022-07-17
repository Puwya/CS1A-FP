#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

const int width {99}, height {99}, maxValue {255};
char *readImg(std::string fileName, std::string outFile);
void negImage(char r[width][height], char g[width][height], char b[width][height]);
void saveImage(std::string outFile, char r[width][height], char g[width][height], char b[width][height]);