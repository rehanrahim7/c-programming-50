// Code to print squares of first 10 natural numbers
#include <stdio.h>
void main() 
{
    int i = 1;
    do {
        printf("%d^2 = %d\n", i, i*i);
        i++;
    } while(i <= 10);
}