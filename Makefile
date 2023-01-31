test : Character.o Tests.cpp
	g++ -o tests Tests.cpp Character.o

Character.o : Character.cpp Character.h
	g++ -c Character.cpp

Tests.o : Tests.cpp
	g++ -c Tests.cpp
