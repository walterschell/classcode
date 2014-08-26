#include <cstdlib>
#include <iostream>
#include <ctime>

int rand(int min, int max);
int rand(int min, int max)
{
    int range = max - min + 1;
    int num = std::rand() % range;
    num += min;
    return num;
}
int main()
{
    int min_int = 0;
    int max_int = 10;
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << " " << rand(min_int, max_int) << std::endl;
    }

    return 0;
}
