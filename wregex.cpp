#include "wregex.h"
#include <string>
#include <regex>
#include <vector>


std::vector<std::string> search(const std::string &regex_str, const std::string &line)
{
    std::regex regex(regex_str);
    std::vector<std::string> results;
    std::smatch match;
    if (! std::regex_search(line, match, regex))
    {
        return results;
    }
    else
    {
        for (auto grp : match)
        {
            results.push_back(grp.str());
        }
    }
    return results;
}

