#include <fstream>
#include <iostream>

int main()
{
    std::ofstream outfile("readme.txt");
    // todo: check if it is already created
    if (not outfile.is_open())
    {
        std::cout << "Cannot create file";
    }

    outfile << "Hello!\n";
    outfile.close();
    return 0;
}