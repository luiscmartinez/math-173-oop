# Project 3: 1960s Spell Checker
For this project you will define a spell-checker function
```
std::vector<std::string> 
suggested_corrections(const std::string& word,
    const std::vector<std::string>& dictionary_words, 
    int n = 3);
```
which returns possible spelling corrections of a (perhaps) misspelled word. It takes as input the misspelled word, a vector of correctly-spelled words (dictionary_words ), and the number of words to suggest (n, default 3). We will use the Levenshtein distance to find nearest matches, as described below.

## Levenshtein Distance
Mathematician Vladimir Levenshtein created a "distance" function for strings around 1965 which you will use to correct misspelled words. This "Levenshtein distance" between two words is, roughly, the minimal number of character changes, insertions, or deletions required to transform one word to another. The idea is that simple typos should yield small Levenshtein distances. For example, the Levenshtein distance between "bible" and "bubble" is 2 because the moves
"bible" → "buble" → "bubble"
1) converting the "i" in "bible" to "u", and then 
2) inserting a "b" before the "l" in "buble" are sufficient for the conversion, and this is the smallest number of moves possible for the conversion (which is not hard to prove). Here is a recursive definition adapted from the Wikipedia article on Levenshtein distance.
Definition. If a and b are strings, then their Levenshtein distance, lev(a, b), is
(1) a. size(), if b. size() is 0,
(2) b. size(), if a. size() is 0,
(3) lev(a′, b′) if a[0] equals b[0], where a′ and b′ are the strings
a and b with their first characters removed, respectively, and if none of these conditions are satisfied, then lev(a, b) is
(4) 1 + the smallest of lev(a′, b), lev(a, b′) and lev(a′, b′)
## Requirements
1. You must define a function
```int levenshtein(const std::string& a, const std::string& b); ``` 
which returns the Levenshtein distance between words a and b. Give its declaration in a file named levenshtein.h, and definition in a file named levenshtein.cpp. Please give a recursive definition based on the definition above. Do not copy code from the internet.

2. Declare the ```suggested_corrections()``` function in a file spellcheck.h and give its definition in the file spellcheck.cpp. This function must use the ```levenshtein()``` function from levenshtein.h to compute the distances, and return a list of n words from dictionary_words with minimal Levenshtein distances. Be sure to return exactly n words. For example, if there are 100 words with the same minimal Levenshtein distance to a given word, and n = 5 suggestions are requested, then return any 5 of the 100 words. (I do not care how you choose.)
3. Define main() in main.cpp as follows.
``` 
int main() 
{
    auto words = load_dictionary("dictionary.txt"); 
    char response = ’y’;
    do {
        std::cout << "Enter a word to check. ";
        std::string word;
        std::cin >> word;
        std::cout << "How many suggestions would you like? "; int n;
        std::cin >> n;
        std::cout << "Here are your spelling suggestions.0;
        auto corrections = suggested_corrections(word, words, n); 
        for (auto w: corrections) {
            std::cout << w << ’0; 
            std::cout << "Try again? (y/n) ";
            std::cin >> response;
        }
    } while (response == ’y’ or response == ’Y’);
}
```
4. Note: I will provide files load_dictionary.h and load_dictionary.cpp for loading the dictionary into memory, and another file dictionary.txt with dictionary words, one per line. (You do not have to write code for loading the dictionary into memo- ry.) So your project directory with have 8 files, 
(1) levenshtein.h, (2) levenshtein.cpp, (3) spellcheck.h, (4) spellcheck.cpp, (5) load_dictionary.h, (6) load_dictionary.cpp, (7) dictionary.txt, and (8) main.cpp.
## General Requirements
The first three lines of every file in your program must include (1) your name, (2) your student ID, and (3) the honor statement ("This is my own work."). For example,
Regis Smith
SID: 123456789
This program is my own work.
Use appropriate types, use descriptive variable and function names, indent properly (or use auto-indenting), and give comments when necessary. Lines in your program should generally never be longer than 80 characters, unless doing so would substantially increase readability. Your code should be organized and clear.
Do not use forbidden constructions. Do not copy lame code from the internet. Do not use library functions as workarounds. Think for yourself. Get advice, but do not copy code. And finally, please do not submit code you do not understand. All submissions will be compared with plagiarism detectors.
## References
Levenshtein distance on Wikipedia https://en.wikipedia.org/wiki/Levenshtein_distance