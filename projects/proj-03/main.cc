#include "levenshtein.h"
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> words = {"run", "ran", "rise", "robot"};
    std::string word = "rob";

    for (std::string w : words)
    {
        std::cout << "lev distance between " << w << " and " << word << " is " << levenshtein(w, word) << ".\n";
    }
}