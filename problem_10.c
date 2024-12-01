// Write a program to perform addition, subtraction, multiplication, and division of two numbers.
#include <stdio.h>
int main()
{
    float num1, num2, sum, product, division, sub;
    char operator;
    printf("Enter the two numbers \n");
    scanf("%f%f", &num1, &num2);
    printf(" Enter the operator {+ for add \n - for sub \n * for product \n / for division}\n");
    scanf(" %c", &operator); // give space like " %c" or else it gives error
    switch (operator)
    {
    case '+':
        sum = num1 + num2;
        printf(" The sum of %f + %f is %f", num1, num2, sum);
        break;
    case '-':
        sub = num1 - num2;
        printf(" The sub of %f - %f is %f", num1, num2, sub);
        break;

    case '*':
        product = num1 * num2;
        printf(" The product of %f X  %f is %f", num1, num2, product);
        break;
    case '/':
        if (num2 != 0)
        {
            division = num1 / num2;
            printf(" The sum of %f / %f is %f", num1, num2, division);
        }
        else
        {
            printf("not divided by zero");
        }
        break;
    default:
    {
        printf("invalid operator");
    }
    }

    return 0;
}
