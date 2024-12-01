//Write a program to demonstrate the use of the ternary operator.
#include <stdio.h>
int main() 
{
    int num1;
    printf("enter the value\n");
    scanf("%d",&num1);
    (num1%2 == 0)?printf("%d is even\n",num1):printf("%d is odd\n",num1); // ternary operator (condition)?statement1:statment2;
return 0;
}