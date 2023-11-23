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
            std::cout << "Adjacent States:";
            // do not need a new line for states without adjacent states
            // instead new line will be inserted at the end of the while else block
            if (adjacentStates.length() != 2)
            {
                std::cout << "\n";
            }
            // starts at adjacent states
            for (size_t i = 3; i < adjacentStates.length(); ++i)
            {
                // Checking for whitespace
                if (adjacentStates[i] == ' ')
                {
                    // two continuous whitespace means
                    // we need a new line to output another adjacent state
                    if (adjacentStates[i + 1] == ' ')
                    {
                        std::cout << "\n";
                    }
                }
                else
                {
                    std::cout << adjacentStates[i];
                }
            }
            std::cout << "\n";
        }
    }
    file.close();
    return 0;
}