all: Sourse

Sourse: Sourse.odj
	g++ Sourse.obj -o Sourse

Sourse.obj: Sourse.cpp
	g++ -c Sourse.cpp


clean:
	rm -rf *.obj Sourse
