// demonstrates std::pair
#include <algorithm> // for sorting
#include <iostream>
#include <utility> // for std::pair
#include <string>
#include <vector>

int main() {
    std::pair<int, std::string> a = {3, "quest"}, b = {-6, "hello"}, c = {37, "goodbye"};
    std::vector<std::pair<int, std::string>> items;
    items.push_back(a);
    items.push_back(b);
    items.push_back(c);

    for (auto item: items) {
        std::cout << item.first << "\t" << item.second << "\n";
    }
    std::sort(items.begin(), items.end()); // same as line below
    // std::ranges::sort(items);
    for (auto item: items) {
        std::cout << item.first << "\n" << item.second << "\n";
    }
    
}

