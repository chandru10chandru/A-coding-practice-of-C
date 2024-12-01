/*// Write a program to demonstrate the use of logical operators.
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the sides of triangle \n");
    scanf("%f%f%f", &a, &b, &c);
    if (a == b && b == c && a == c) // && use to check all conditions are true 
        printf("equilatral");
    else if (a == b || b == c || c == a)// || use to check wheather one condition are true or not
        printf("scelene");
    else if (a != b != c)// != is not equal to all
        printf("isoscels");

    return 0;
}*/
#include <stdio.h>

int main() {
    int a, b, c;

    // Input values from the user
    printf("Enter three integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Logical AND (&&)
    if (a > b && a > c) {
        printf("Logical AND: %d is greater than both %d and %d\n", a, b, c);
    } else {
        printf("Logical AND: %d is not greater than both %d and %d\n", a, b, c);
    }

    // Logical OR (||)
    if (a > b || a > c) {
        printf("Logical OR: %d is greater than either %d or %d\n", a, b, c);
    } else {
        printf("Logical OR: %d is not greater than either %d or %d\n", a, b, c);
    }

    // Logical NOT (!)
    if (!(a == b)) {
        printf("Logical NOT: %d is not equal to %d\n", a, b);
    } else {
        printf("Logical NOT: %d is equal to %d\n", a, b);
    }

    return 0;
}
