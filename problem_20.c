//Write a program to find the largest of two numbers. usinf if else
#include <stdio.h>
int main() 
{
    int num1,num2;
    printf("Enter the two numbers \n");
    scanf("%d%d",&num1,&num2);
    if (num1>num2){
        printf("%d is maximum\n",num1);}
    else 
        printf("%d is maximum\n",num2);
return 0;
}   