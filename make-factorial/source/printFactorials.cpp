#include "../include/factorial.h"
#include <cctype>
#include <iomanip>
#include <iostream>

bool is_integer(const char *str)
{
    // Pamietamy o znakach!
    if (*str == '+' || *str == '-')
        str = str + 1;
    
    bool allAreDigits = true;
    while (*str != '\0')
    {
        if (!isdigit(*str))
        {
            allAreDigits = false;
        }
        str = str + 1;
    }
    return allAreDigits;
}

void printAllFactorialsUpTo(int maxArg)
{
    int i = 0;
    
    while (i <= maxArg)
    {
        std::cout << i << ": " << factorial(i) << std::endl;
        i = i + 1;
    }
    
}
