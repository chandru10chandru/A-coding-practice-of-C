// Write a program to demonstrate increment and decrement operators.
#include <stdio.h>
int main()
{
    int n;
    printf("enter the n value\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) // increment i++
    {
        printf("%d\n", i);
    }
    for (int i = n; i; i--) //i-- decrement
    {
        printf("%d\n", i);
    }
    
    return 0;
}