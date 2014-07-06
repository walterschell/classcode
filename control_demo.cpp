#include <iostream>

int func1(int low, int high)
{
    if (high < low)
    {
        return 0;
    }
    int num = low;
    int result = 0;
    while (num <= high)
    {
        result = result + num;
        num = num + 1;
    }
    return result;
}
int func2(int low, int high)
{
    int i;
    int result = 0;
    for (i = 0;i <= high; i++)
    {
        result += i;
    }
    return result;
}
int main(int argc, char *argv[])
{
    std::cout << "func1(1,10): " << func1(1,10) << std::endl;
    std::cout << "func2(1,10): " << func2(1,10) << std::endl;
    return 0;
}
