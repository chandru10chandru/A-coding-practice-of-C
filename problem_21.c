// Write a program to check if a number is divisible by 5 and 11.
#include <stdio.h>
int main()
{
    int num1;
    printf("enter the value\n");
    scanf("%d", &num1);
    if (num1 % 5 == 0)
    {
        printf("%d is divisible by 5\n",num1);
    }
    else
    {
        printf("%d is not divible by 5\n",num1);
    }
    if (num1 % 11 == 0)
    {
        printf("%d is divisible by 11\n",num1);
    }
    else
    {
        printf("%d is not divible by 11\n",num1);
    }
    return 0;
}