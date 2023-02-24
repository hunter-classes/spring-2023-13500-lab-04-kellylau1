main: main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o 
checkerboard3x3.o
	g++ -g -o main main.o box.o checkerboard.o cross.o lower.o 
upper.o trapezoid.o checkerboard3x3.o

main.o: main.cpp box.h checkerboard.h cross.h lower.h upper.h trapezoid.h 
checkerboard3x3.h
	g++ -g -c main.cpp

box.o: box.cpp box.h
	g++ -g -c box.cpp

checkerboard.o: checkerboard.cpp checkerboard.h 
	g++ -g -c checkerboard.cpp

cross.o: cross.cpp cross.h
	g++ -g -c cross.cpp

lower.o: lower.cpp lower.h
	g++ -g -c lower.cpp

upper.o: upper.cpp upper.h
	g++ -g -c upper.cpp

trapezoid.o: trapezoid.cpp trapezoid.h
	g++ -g -c trapezoid.cpp

checkerboard3x3.o: checkerboard3x3.cpp checkerboard3x3.h
	g++ -g -c checkerboard3x3.cpp

clean: rm -f main.o box.o checkerboard.o cross.h lower.h upper.h 
trapezoid.h checkerboard3x3.h
