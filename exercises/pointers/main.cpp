#include <iostream>
using namespace std;

int main()
{
    int var = 8;        // Declare an integer variable
    int *ptr = nullptr; // Declare a pointer to an integer and initialize it with the address of var
    ptr = &var;
    cout << "Value of var: " << var << endl;             // Print the value of var
    cout << "Address of var: " << &var << endl;          // Print the memory address of var
    cout << "Value of ptr (address): " << ptr << endl;   // Print the value stored in ptr (which is the address of var)
    cout << "Value pointed to by ptr: " << *ptr << endl; // Print the value at the memory address stored in ptr

    *ptr = 10;                                   // Change the value at the memory address stored in ptr
    cout << "New value of var: " << var << endl; // Print the new value of var

    return 0;
}
