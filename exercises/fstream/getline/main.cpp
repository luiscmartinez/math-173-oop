#include <iostream>
#include <fstream>

int main()
{
    std::ifstream infile("readme.md");
    std::string line;
    int counter = 0;
    while (std::getline(infile, line))
    {
        ++counter;
        std::cout << counter << ": " << line << '\n';
    }

    infile.close();
}