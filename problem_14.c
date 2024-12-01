//Write a program to find the remainder of a division operation using the modulus operator.
#include <stdio.h>
int main() 
{
    int num1,num2,reminder;
    printf("Enter the two numbers \n");
    scanf("%d%d",&num1,&num2);
    reminder = num1 % num2;
    printf("The reminder is %d",reminder);

return 0;
}