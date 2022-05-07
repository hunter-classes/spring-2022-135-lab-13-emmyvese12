main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

main.o: main.cpp funcs.h
	g++ -c main.cpp

tests.o: tests.cpp funcs.h doctest.h
	g++ -std=c++11 -c tests.cpp

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

clean:
	rm -f main main.o tests tests.o funcs.o