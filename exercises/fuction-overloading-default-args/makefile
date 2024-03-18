run: main.o sum.o
	clang++ main.o sum.o -o run
main.o: main.cpp sum.hpp
	clang++ -c main.cpp 
sum.o: sum.cpp sum.hpp
	clang++ -c sum.cpp
