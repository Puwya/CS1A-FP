/*
finalproj.cpp: PPM image manipulator

Author: Carlos Aguilera
Class: CS1A, Fall 2019, 80540

modifications:
12/17/19
*/

#include "finalproj.h"

int main()
{
    unsigned char r[HEIGHT][WID], g[HEIGHT][WID], b[HEIGHT][WID];
    int choice;
    char ifname[20];
    //I know that using a string would have saved space and been easier to pass with parameter
    
    std::cout << std::endl;
    std::cout << "Enter the input file name: ";
    std::cin >> ifname;
    //I tried to also name the ending ppm but I could not crack it

    while(std::cin)
    {
        menu();
				std::cin >> choice;
				std::cout << std::endl;

	if(choice == 1)
	{
        readImg(choice, ifname, r, g, b);
	    std::cout << "Image succesfully mirrored horizontally and saved as file cs1aHoriz.ppm" << std::endl;
        }
	else if(choice == 2)
	{
	    readImg(choice, ifname, r, g, b);
	    std::cout << "Image succesfully mirrored vertically and saved as file cs1aVert.ppm" << std::endl;
	}
	else if(choice == 3)
	{
	    readImg(choice, ifname, r, g, b);
	    std::cout << "Image succesfully converted to negative and save as file cs1aneg.ppm" << std::endl;
	}
	else if(choice == 4)
	{
	    std::cout << "End the Program!!" << std::endl;
	    break;
	}
    else {
        std::cout << "Choice is not valid." << std::endl; //telling user choice does not exist
    }

    }
    return 0;

}
