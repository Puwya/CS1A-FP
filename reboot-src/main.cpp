#include "main.hpp"

int main()
{
    int selection {};
    std::string fileName {};
    do
    {
        char r[width][height];
        char g[width][height];
        char b[width][height];
        std::cout << "Enter input file name: ";
        std::cin >> fileName;
        std::fstream ppmFile;
        ppmFile.open(fileName, std::ios::in);
        int mover {};

        if(ppmFile.is_open())
        {
            ppmFile >> mover >> mover >> mover >> mover;
            for(size_t i {0}; i < width; i++)
            {
                for(size_t j {0}; j < height; j++)
                {
                    r[i][j] = ppmFile.get();
                    g[i][j] = ppmFile.get();
                    b[i][j] = ppmFile.get();
                }
            }
            ppmFile.close();
        }
        std::cout << "1. Mirror Horizontally\n"
                  << "2. Mirror Vertically\n"
                  << "3. Convert to negative\n"
                  << "4. Exit\n"
                  << "Enter Choice: ";
        std::cin >> selection;

        if(selection == 1) {
            negImage(r, g, b);
        }
        else if(selection == 2) {
        }
        else if(selection == 3) {
        }
        else if(selection == 4) {
        }else 
            std::cout << "Invalid choice!\n";
    } while (selection != 4);
    
}