CC = g++

all: finalproj tar

finalproj: finalproj.h finalproj.cpp menu.o mirrorHoriz.o mirrorVert.o negImg.o readImg.o saveImg.o
	g++ finalproj.cpp -o finalproj menu.o mirrorHoriz.o mirrorVert.o negImg.o readImg.o saveImg.o

menu.o: finalproj.h menu.cpp
	g++ -c menu.cpp -o menu.o

mirrorHoriz.o: finalproj.h mirrorHoriz.cpp
	g++ -c mirrorHoriz.cpp -o mirrorHoriz.o

mirrorVert.o: finalproj.h mirrorVert.cpp
	g++ -c mirrorVert.cpp -o mirrorVert.o

negImg.o: finalproj.h negImg.cpp
	g++ -c negImg.cpp -o negImg.o

readImg.o: finalproj.h readImg.cpp
	g++ -c readImg.cpp -o readImg.o

saveImg.o: finalproj.h saveImg.cpp
	g++ -c saveImg.cpp -o saveImg.o

clean:
	rm *.o finalproj

tar:
	tar cf finalproj.tar Makefile finalproj.cpp finalproj.scr finalproj.h menu.cpp mirrorHoriz.cpp mirrorVert.cpp negImg.cpp readImg.cpp saveImg.cpp

