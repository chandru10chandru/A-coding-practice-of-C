//Write a program to find the maximum of two numbers using a ternary operator.
#include <stdio.h>
int main() 
{
    int num1,num2;
    printf("Enter the two numbers \n");
    scanf("%d%d",&num1,&num2);
    (num1>num2)?printf("%d is maximum\n",num1):printf("%d is maximum\n",num2);
return 0;
}   