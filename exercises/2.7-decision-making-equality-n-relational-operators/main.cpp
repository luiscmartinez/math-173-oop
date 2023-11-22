#include <iostream> // allws program to perform input and output

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number1;
    int number2;
    // prompt user for data
    cout << "Please enter two integers to compare \n";
    // read two integers from user
    cin >> number1 >> number2; // cascaded stream extraction operations
    cout << "\n calculating answers below ... \n\n";

    if (number1 == number2)
    {
        cout << number1 << " == " << number2 << endl;
    }

    if (number1 != number2)
    {
        cout << number1 << " != " << number2 << endl;
    }

    if (number1 < number2)
    {
        cout << number1 << " < " << number2 << endl;
    }

    if (number1 > number2)
    {
        cout << number1 << " > " << number2 << endl;
    }

    if (number1 <= number2)
    {
        cout << number1 << " <= " << number2 << endl;
    }

    if (number1 >= number2)
    {
        cout << number1 << " >= " << number2 << endl;
    }
}