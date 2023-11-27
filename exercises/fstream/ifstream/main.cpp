#include <fstream>
#include <iostream>

int main() {
    std::ifstream infile("readme.md");

    if (!infile.is_open()) {
        std::cout << "cannot open readme.md \n";
    }
    std::string word;
    infile >> word;

    std::cout << "First word in readme.md is " << word << ".\n";
}