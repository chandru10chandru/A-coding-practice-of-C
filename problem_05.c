//Write a program to demonstrate the use of constants.
#include <stdio.h>
#define PI 3.14 //defining a const value

int main() 
{
    const int age = 19;
    float  radius,area;
    printf("enter the radius \n");
    scanf("%f",&radius);
    area = PI*(radius*radius);
    printf("the area is  %.2f\n",area);
    printf("the age is %d",age);
    
return 0;
}