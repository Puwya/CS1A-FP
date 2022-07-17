#include "finalproj.h"

int readImg(int choice, char ifname[20], unsigned char r[][WID], unsigned char g[][WID], unsigned char b[][WID])
{
    char ofname[20];
    std::string header;
    int wid, hei, max;
    std::ifstream infile;

    infile.open(ifname);
    infile >> header;
    infile >> wid >> hei >> max;

    for(int col=0; col < HEIGHT; ++col)
    {
        for(int row=0; row < WID; ++row)
        {
            r[col][row] = infile.get();
            g[col][row] = infile.get();
            b[col][row] = infile.get();
            //rgb ing the cs1a.ppm
        }
    }
    infile.close();

    if(choice ==1)
    {
	char ofname[20] = "cs1aHoriz.ppm";
	saveImg(ofname, r, g, b);
    }
    else if(choice ==2)
    {
	mirrorVert(r, g, b);
	char ofname[20] = "cs1aVert.ppm";
	saveImg(ofname, r, g, b);
    }
    else if(choice ==3)
    {
	negImg(r, g, b);
	char ofname[20] = "cs1aneg.ppm";
	saveImg(ofname, r, g, b);
    }
//This was making the ofname turn into each ppm depending on the choice of the user
    return 0; 
}
	
