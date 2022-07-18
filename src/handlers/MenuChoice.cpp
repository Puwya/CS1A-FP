#include <iostream>
#include <limits>

class Exception {};

void PrintMenu();

int MenuChoice() {
  bool validated = false;
  int choice;
  while (!validated) {
    PrintMenu();
    try {
      std::cin >> choice;
      if (std::cin.fail() || choice < 1 || choice > 4) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        throw Exception();
      }
      validated = true;
    } catch (...) {
      std::cout << "Error Please Try Again!\n";
    }
  }
  return choice;
}