#include <iostream>

using namespace std;

int main()
{
    cout << "Are you (1) a duck, (2) a dog, (3) a cat, (4) a lion, or (5) something else?  Enter 1, 2, 3, 4, or 5.";
    int response;
    cin >> response;
    switch (response)
    {
    case 1:
        cout << "Quack!";
        break;
    case 2:
        cout << "Woof!";
        break;
    case 3:
        cout << "Meow!";
        break;
    case 4:
        cout << "Roar!";
        break;
    default:
        cout << "I must be something out of this world!";
        break;
    }
}