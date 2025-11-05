// Program to convert temperature between Celsius and Fahrenheit
#include <stdio.h>
void main() 
{
    int choice;
    float temp, converted;

    printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            converted = (temp * 9/5) + 32;
            printf("Temperature in Fahrenheit = %.2f", converted);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            converted = (temp - 32) * 5/9;
            printf("Temperature in Celsius = %.2f", converted);
            break;
        default:
            printf("Invalid choice!");
    }
}