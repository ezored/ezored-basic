#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::string line;
    std::ifstream f("assets/content.txt");

    if (f.is_open())
    {
        while (!f.eof())
        {
            getline(f, line);
            std::cout << line << std::endl;
        }

        f.close();

        return EXIT_SUCCESS;
    }
    else
    {
        std::cout << "[ERROR] Unable to open file" << std::endl;
    }

    return EXIT_FAILURE;
}
