// Program to greet user based on time of day
#include <stdio.h>
void main() 
{
    int hour;
    printf("Enter time (0–23 hours): ");
    scanf("%d", &hour);

    switch(hour / 6) {
        case 0: printf("Good Night!"); break;
        case 1: printf("Good Morning!"); break;
        case 2: printf("Good Afternoon!"); break;
        case 3: printf("Good Evening!"); break;
        default: printf("Invalid time!");
    }
}