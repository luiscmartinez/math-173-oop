#include <iostream>
#include <vector>

using namespace std;

string reverse(string str)
{
    string new_string = "";
    for (int i = str.size() - 1; i >= 0; i--)
    {
        new_string += str[i];
    }
    return new_string;
}

int main()
{
    string str = "abc d";
    cout << reverse(str);
}