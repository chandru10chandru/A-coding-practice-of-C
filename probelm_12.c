//Write a program to demonstrate the use of relational operators.
#include <stdio.h>
int main() 
{
   int a,b;
   printf("enter the two numbers \n");
   scanf("%d%d",&a,&b);
   if (a == b){
        printf("%d is equal to %d\n",a,b);
        }
    else{
        printf("%d is not  equal to %d\n",a,b);
    }
    if (a != b){
        printf("%d is not equal to %d\n",a,b);
        }
    else{
        printf("%d is  equal to %d\n",a,b);
    }
    if (a >= b){
        printf("%d is greater than or equal to %d\n",a,b);
        }
    else{
        printf("%d is not grater than or equal to %d\n",a,b);
    
    }
    if (a <= b){
        printf("%d is less than or equal to %d\n",a,b);
        }
    else{
        printf("%d is not less than or equal to %d\n",a,b);
    }
    if (a > b){
        printf("%d is graeter than %d\n",a,b);
        }
    else{
        printf("%d is not  not greater than  %d\n",a,b);
    }
    if (a < b){
        printf("%d is less than %d\n",a,b);
        }
    else{
        printf("%d is not less than %d\n",a,b);
    }
   

return 0;
}