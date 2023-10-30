// demonstrate std::map, which sorts entries automatically
#include <algorithm> // for sorting
#include <iostream>
#include <utility> // for std::pair
#include <string>
#include <vector>
#include <map>

int main() {
    std::map<int, std::string> items;
    items[3] = "quest";
    items[-6] = "hello";
    items[37] = "goodbye";

    for (auto item: items) {
        std::cout << item.first << '\t' << item.second << '\n';
    }
}