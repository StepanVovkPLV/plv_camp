#include <stdio.h>
#include <string.h>
#include "libconvert.h"

char tolow()
{
    char str[100];
    int i;
    printf("Enter a string : ");
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("String in Upper Case = %s", str);
    return 0;
}