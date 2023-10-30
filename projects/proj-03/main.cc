#include "levenshtein.h"
#include "load_dictionary.h"
#include "spellchecker.h"
#include <iostream>
#include <string>
#include <vector>

int main()
{
    auto words = load_dictionary("dictionary.txt");
    char response = 'y';
    do {
        std::cout << "Enter a word to check. " << std::endl;
        std::string word;
        std::cin >> word;
        std::cout << "How many suggestions would you like? " << std::endl;
        int n;
        std::cin >> n;
        std:: cout << "Here are your spelling suggestions." << std::endl;
        auto corrections = suggested_corrections(word, words, n);
        for (auto w: corrections) {
            std::cout << w << "\n";
        }
        std::cout << "Try again?  (y/n) ";
        std::cin >> response;
    } while (response == 'y' | response == 'Y');
}