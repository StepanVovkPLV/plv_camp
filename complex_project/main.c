#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    char ch;
    double a, b;
    while (1)
    {
        printf("Enter an operator (+, -, *, /, q, f(for factorial)), if want to exit press x: ");
        scanf(" %c", &ch);
        // to exit
        if (ch == 'x')
            exit(0);
        if (ch == 'q')
        {
            printf("Enter number for sqrt");
            scanf(" %lf", &a);
            root(a);
            return 0;
        }
        printf("Enter two first and second operand: ");
        scanf("%lf %lf", &a, &b);
        // Using switch case we will differentiate
        // operations based on different operator
        switch (ch)
        {
        // For Addition
        case '+':
            sum(a, b);
            break;
        // For Subtraction
        case '-':
            substract(a, b);
            break;
        // For Multiplication
        case '*':
            product(a, b);
            break;
        // For Division
        case '/':
            fraction(a, b);
            break;
        case 'f':
            fact(a);
            break;
        // If operator doesn't match any case constant
        default:
            printf("Error! please write a valid operator\n");
        }
    }
}