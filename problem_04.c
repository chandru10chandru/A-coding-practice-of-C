//Write a program to calculate the area of a circle.
#include <stdio.h>
int main() 
{
    float radius,area,pi;
    printf("enter the radius\n");
    scanf("%f",&radius);
    pi = 3.142;
    area = pi*(radius*radius);
    printf("The are of the circle is %.2f ",area);
    


return 0;
}