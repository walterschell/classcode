#include "wregex.h"
#include <iostream>
#include <string>
int main(int argc, char *argv[])
{
    std::vector<std::string> lines = {"Spot 1,34QCH6325382059, 10KM, \"A Random spot on the globe\"",
                                      "Spot 2,49VDC1933169122, 4000M, \"Another random spot on the globe\"",
                                      "Spot 3,24XVK5252656544, 6.7KM, \"Yet another random spot on the globe\""};
    std::string regex("^(.+?),(.+?),\\s*([\\d\\.]+)([kK]?[mM]),\\s*\"(.+)\"");
    std::cout << "Regex: ->" << regex << "<-\n";
    for (auto line : lines)
    {
        std::cout << "Line: ->" << line << "<-\n";
        std::cout << "Matches:";
        for (auto match : search(regex, line))
        {
            std::cout << "->" << match << "<- ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
