#include "finalproj.h"

int negImg(unsigned char r[][WID], unsigned char g[][WID], unsigned char b[][WID])
{
    for(int col = 0; col < HEIGHT; ++col)
    {
        for(int row=0; row < WID; ++row)
        {
            r[col][row] = 255-int(r[col][row]);
            unsigned char(r[col][row]);
            g[col][row] = 255-int(g[col][row]);
            unsigned char(g[col][row]);
            b[col][row] = 255-int(b[col][row]);
            unsigned char(b[col][row]);
        }
    }
    return 0;
}
