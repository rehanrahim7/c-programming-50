// Code for swapping two numbers
#include <stdio.h>

void main() 
{
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d", a, b);
}
