# once you add sub02.cc, you need to modify Makefile to include sub02.cc as a dependency
matrix.exe: matrix.cc matrix_sub.cc matrix.h
	g++ -std=c++11 -Wall -Wextra -pedantic -o matrix.exe matrix.cc

clean:
	rm *.exe