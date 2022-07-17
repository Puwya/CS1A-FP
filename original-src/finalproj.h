#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>

const int WID = 366; 
const int HEIGHT = 216;
const int MAX = 255;
//Did these const so they stay the same and never change with arrays

int menu();
int readImg(int choice, char ifname[20], unsigned char r[][WID], unsigned char g[][WID], unsigned char b[][WID]);
int saveImg(char ofname[20], unsigned char r[][WID], unsigned char g[][WID], unsigned char b[][WID]);
int mirrorHoriz(unsigned char r[][WID], unsigned char g[][WID], unsigned char b[][WID]);
int mirrorVert(unsigned char r[][WID], unsigned char g[][WID], unsigned char b[][WID]);
int negImg(unsigned char r[][WID], unsigned char g[][WID], unsigned char b[][WID]);