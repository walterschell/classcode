#include <ctime>
#include <string>
using std::string;
int current_year()
{
    time_t now = time(NULL);
    tm *formatted = gmtime(&now);
    return formatted->tm_year + 1900;
}
class Person
{
public:
    Person();
    Person(const string first_name, const int year_born);
    int DOB;
private:
    string _first_name;
};
Person::Person()
{
}

Person::Person(const std::string first_name, const int year_born)
{
    DOB = year_born;
    _first_name = first_name;
}




int main(int argc, char *argv[])
{
    Person person1("Alice", 1980);
    Person person2;
    person2.DOB = 1986;
    person2._first_name = "Bob";

    return 0;
}

