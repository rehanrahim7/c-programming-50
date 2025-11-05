// Program to print color based on number input
#include <stdio.h>
void main() 
{
    int n;
    printf("Enter a number (1-5): ");
    scanf("%d", &n);

    switch(n) {
        case 1: printf("Red"); break;
        case 2: printf("Blue"); break;
        case 3: printf("Green"); break;
        case 4: printf("Yellow"); break;
        case 5: printf("Orange"); break;
        default: printf("Invalid number!");
    }
}