#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream file("states.txt");
    std::string line;
    while (getline(file, line))
    {
        std::string state = line.substr(0, 2);
        std::string adjacentStates = line.substr(0, line.length());
        if (state == "# " || state == "")
        {
            continue;
        }
        else
        {

            std::cout << "State:\n";
            std::cout << state << "\n";
            std::cout << "Adjacent States:\n";
            for (size_t i = 2; i < adjacentStates.length(); ++i)
            {
                // Checking for space
                if (adjacentStates[i] == ' ')
                {
                    std::cout << "\n";
                }
                else
                {
                    std::cout << adjacentStates[i];
                }
            }
        }
        std::cout << "\n";
    }
    file.close();
    return 0;
}