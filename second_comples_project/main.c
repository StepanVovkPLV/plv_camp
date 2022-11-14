#include <stdio.h>
#include <stdlib.h>
#include "header.h"


int main()
{
    char ch;
    while (1)
    {
        printf("Enter an operator `u` for uppercase or `l` for lower: ");
        scanf(" %c", &ch);
        // to exit
        if (ch == 'u')
            toup();
        if (ch == 'l')
            tolow();
    }
}