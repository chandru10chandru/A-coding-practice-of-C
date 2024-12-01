// Write a program to check if a number is positive, negative, or zero.
#include <stdio.h>
int main()
{
    int num1;
    printf("enter the value\n");
    if (num1 > 0)
    {
        printf("%d is positive\n", num1);
    }
    else if (num1 == 0)
    {
        printf("%d is Zero\n", num1);
    }
    else if (num1 < 0)
    {
        printf("%d is negetive\n", num1);
    }
    else
        printf("invalid input ");

    return 0;
}