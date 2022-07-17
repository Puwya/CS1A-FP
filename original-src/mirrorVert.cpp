#include "finalproj.h"

int mirrorVert(unsigned char r[][WID], unsigned char g[][WID], unsigned char b[][WID])
{
int k = WID/2;
int j = WID/2;

    for(int col=0; col < HEIGHT ; ++col)
    {
        for(int row=0; row < WID/2; ++row)
        {

            r[col][j-1] = r[col][k];
            g[col][j-1] = g[col][k];
            b[col][j-1] = b[col][k];
            --k;
            ++j;
        }
        k = WID/2;
        j = WID/2;
    }
    return 0;
}
