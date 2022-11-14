#include <stdio.h>
#include <string.h>
#include "header.h"

char tolow()
{
    char str[100];
    int i;
    printf("Enter a string : ");
    gets(str);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    printf("String in Upper Case = %s", s);
    return 0;
}