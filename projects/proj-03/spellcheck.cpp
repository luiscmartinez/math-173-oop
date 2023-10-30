
#include "spellchecker.h"
#include "levenshtein.h"
#include <iostream>
#include <algorithm>
#include <utility>

std::vector<std::string> suggested_corrections(const std::string &word,
                                               const std::vector<std::string> &dictionary_words, int n)
{
    std::vector<std::pair<int, std::string>> distances;
    for (auto dictionary_word : dictionary_words)
    {
        int distance = levenshtein(word, dictionary_word);
        std::pair<int, std::string> distance_word = {distance, dictionary_word};
        distances.push_back(distance_word);
    }
    std::sort(distances.begin(), distances.end());
    std::vector<std::string> results;
    for (int i = 0; i <= n; ++i)
    {
        results.push_back(distances[i].second);
    }
    return results;
}