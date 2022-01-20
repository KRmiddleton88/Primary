#include <iostream>
#include <cmath>


bool isprime (int x)
{
    int amIafactor{};
    for (int y{2}; y < (x / 2); ++y)
    {
        if (x % y == 0)
        {
            ++amIafactor;
        }
    }
    if (amIafactor == 0) {
        std::cout << "The number is a prime";
        return amIafactor;
    } else {
        std::cout << "Not a prime\n";
        return amIafactor;
    }
}

int main()
{
    isprime(7);
}

