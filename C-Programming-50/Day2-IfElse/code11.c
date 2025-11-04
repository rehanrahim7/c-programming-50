// Program to check whether a number is positive, negative or zero
#include <stdio.h>
void main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n > 0)
        printf("Number is positive");
    else if(n < 0)
        printf("Number is negative");
    else
        printf("Number is zero");
}
