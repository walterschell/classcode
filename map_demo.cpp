#include <map>
#include <string>
#include <iostream>
using std::string;
int main(int argc, char *argv[])
{
    std::map<string, int> ages;
    ages["Alice"] = 29;
    ages["Bob"] = 21;
    ages["Eve"] = 30;

    for (auto iter : ages) 
    {
        std::cout << iter.first << ": " << iter.second << std::endl;
    }
    return 0;
}
