// Program to check whether a number is even or odd
#include <stdio.h>
void main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");
}
