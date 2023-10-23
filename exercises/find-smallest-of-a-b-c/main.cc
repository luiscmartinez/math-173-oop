#include <iostream>

int min (int a, int b, int c) {
    int soFarSmallest;
    if (a < b) {
        soFarSmallest = a;
    } else {
        soFarSmallest = b;
    }
    if (soFarSmallest < c) {
        return soFarSmallest;
    } else {
        soFarSmallest = c;
        return soFarSmallest;
    }
}

int main() {
    std::cout << min(11,5,3);
}