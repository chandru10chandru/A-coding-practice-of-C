// Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    float celcius, fahrenheit;
    printf("enter the temp in celcius\n");
    scanf("%f", &celcius);
    fahrenheit = ((celcius * 9 / 5) + 32);//(celcius *9/5)+32 formula
    printf("the value in faherenheit is %.2f", fahrenheit);
    return 0;
}