// Code to calculate factorial of a number
#include <stdio.h>
void main() 
{
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial = %d", fact);
}