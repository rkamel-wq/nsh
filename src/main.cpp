#include "parser.hpp"
#include "builtins.hpp"
#include <iostream>

int main()
{
    while (true)
    {
        std::cout << "nsh> ";
        std::string input;
        std::getline(std::cin, input);

        if (input.empty())
            continue;

        std::vector<std::string> tokens = Parser::parseInput(input);

        Builtins::handle(tokens);
    }
}
