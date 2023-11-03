#include <iostream>

using namespace std;

int main()
{
    char response;
    cin >> response;
    switch (response)
    {
    case 'y':
    case 'Y':
        cout << "You said yes!\n";
        break; // Breaks out of the switch statement 
    case 'N':
    case 'n':
        cout << "Oh noesssss!\n";
        break; // if no break will hit everything else
    default:
        cout << "Invalid";
        break;
    }
    return 0;
}
