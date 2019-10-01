CC=g++
CFLAGS=-c -Wall

all: Sourse

Sourse: Sourse.o
$(CC) Sourse.o -o Sourse

Sourse.o: LW/Sourse.cpp
$(CC) $(CFLAGS) Sourse.cpp

clean:
rm -rf *.o Source
