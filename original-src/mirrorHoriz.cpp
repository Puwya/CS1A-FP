#include "finalproj.h"

int mirrorHoriz(unsigned char r[][WID], unsigned char g[][WID], unsigned char b[][WID])
{
    int k = HEIGHT;

    for(int col=0; col < HEIGHT/2; ++col)
    {
        for(int row=0; row < WID; ++row)
        {
            r[col][row] = r[k][row];
            g[col][row] = g[k][row];
            b[col][row] = b[k][row];
        }
        --k;
    }

    return 0;
}

