#include "finalproj.h"

int saveImg(char ofname[20], unsigned char r[][WID], unsigned char g[][WID], unsigned char b[][WID])
{
    std::ofstream outfile;
    //char ofname[20];
    outfile.open(ofname);
    outfile << "P6" << std::endl;
    outfile << WID << " " << HEIGHT << std::endl;
    outfile << MAX << std::endl;

    for(int col=0; col < HEIGHT; ++col)
    {
        for(int row=0; row < WID; ++row)
        {
            outfile << g[col][row];
            outfile << b[col][row];
            outfile << r[col][row];
        }
    }

    outfile.close();

    return 0;
}
