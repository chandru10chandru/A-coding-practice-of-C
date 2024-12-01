//Write a program to calculate the perimeter of a rectangle.
#include <stdio.h>
int main() 
{
    float length,breadth,perimeter;
    printf("Enter the length and braedth \n");
    scanf("%f%f",&length,&breadth);
    perimeter = 2 * (length+breadth);
    printf("the perimeter of rectange is %.2f\n",perimeter);
return 0;
}