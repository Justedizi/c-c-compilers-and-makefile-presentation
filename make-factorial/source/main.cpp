#include "../include/factorial.h"
#include <iostream>

int main()
{

    bool czyDalej = true;
    char tab[21];
    while (czyDalej)
    {
        std::cin >> tab;
        if (is_integer(tab))
        {
            printAllFactorialsUpTo(atoi(tab));
            czyDalej = false;
        }
        else
        {
            std::cerr << "Argument to nie Liczba! Sprobuj raz jescze: ";
        }
    }

    return 0;
}
