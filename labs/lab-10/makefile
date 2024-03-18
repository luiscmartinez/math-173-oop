run: main.o us_count.o
	clang++ main.o us_count.o -o run
main.o: main.cpp us_count.h
	clang++ -c main.cpp
us_count.o: us_count.cpp us_count.h
	clang++ -c us_count.cpp
