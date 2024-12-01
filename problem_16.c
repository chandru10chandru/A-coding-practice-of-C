//Write a program to check if a number is even or odd using the modulus operator.
#include <stdio.h>
int main() 
{
    int num1;
    printf("Enter the number \n");
    scanf("%d",&num1);
    if (num1%2==0){ // like this we check odd or even
        printf("%d is a even number \n",num1);
    }
    else if (num1%2!=0){
        printf("%d is odd number \n",num1);
    }
    else{
         printf("invalid input");}
return 0;
}