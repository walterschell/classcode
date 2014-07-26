#include "wregex.h"
#include <iostream>
#include <string>
int main(int argc, char *argv[])
{
    std::string regex("\\((.*)\\),\\((.*)\\)");
    std::string line = "asdfsdaf(part1),(part2)asdfasdf";
    std::cout << "Regex: ->" << regex << "<-\n";
    std::cout << "Line: ->" << line << "<-\n";
    std::cout << "Matches:";
    for (auto match : search(regex, line))
    {
        std::cout << "->" << match << "<- ";
    }
    std::cout << std::endl;
    
    
    return 0;
}
