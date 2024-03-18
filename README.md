# East Los Angeles Jr College - Course Math 173 Object-Oriented-Programming

This repo contains course material that I have gone thru.

Run compile c++ file and name the execution file run

```bash
clang++ <C_PLUS_PLUS_FILE_NAME> -o run
```

Compile many c++ files and use c++20 so it can be compatible with headers files

```bash
clang++ \*.cpp -o run -std=c++20
```

Example of makefile content:

```makefile
run: main.o us_count.o
	clang++ main.o us_count.o -o run
main.o: main.cpp us_count.h
	clang++ -c main.cpp
us_count.o: us_count.cpp us_count.h
	clang++ -c us_count.cpp

```
