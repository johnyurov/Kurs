all: Sourse

Sourse: Sourse.o
	g++ Sourse.o -o Sourse

Sourse.o: Sourse.cpp
	g++ -c Sourse.cpp


clean:
	rm -rf *.obj Sourse
