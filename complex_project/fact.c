#include <stdio.h>
#include "header.h"

unsigned int fact(unsigned int n){
    int num3;
    if (n > 0)
    {
        num3 = n * fact(n - 1);
        printf("The result is  %d:\n", num3);
    }
    else
    {
        return 1;
    }
    return 0;
}