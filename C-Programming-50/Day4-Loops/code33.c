// Code to calculate the sum of first N natural numbers
#include <stdio.h>
void main() 
{
    int n, i, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum = %d", sum);
}