#include<string>
#include<iostream>
using std::string;

void function1(string data)
{
    data = "Function1 will take over the world";
}
void function2(string &data)
{
    data = "Fucntion2 will take over the world";
}
int main(int argc, char *argv[])
{
    string string1("The world is safe");
    string string2 = "The world is safe";
    function1(string1);
    function2(string2);
    std::cout << "Pass by value: " << string1 << std::endl;
    std::cout << "Pass by reference: " << string2 << std::endl;
    return 0;
}
