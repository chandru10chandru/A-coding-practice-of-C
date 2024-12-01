//Write a program to demonstrate the use of arithmetic operators.
#include <stdio.h>
int main()
{
    float num1, num2, sum, product, division, sub;
    char operator;
    printf("Enter the two numbers \n");
    scanf("%f%f", &num1, &num2);
    sum = num1+num2;
    sub = num1-num2;
    product = num1*num2;
    division = num1/num2;
    printf("the sum of num1 and num2 is %.2f\n",sum);
    printf("the sub of num1 and num2 is %.2f\n",sub);
    printf("the producct of num1 and num2 is %.2f\n",product);
    printf("the divison of num1 and num2 is %.2f\n",division);



return 0;    
}
