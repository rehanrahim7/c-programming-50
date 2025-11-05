// Simple calculator using switch-case
#include <stdio.h>
void main() 
{
    int choice;
    float a, b, result;

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(choice) {
        case 1: result = a + b;
                printf("Result = %.2f", result);
                break;
        case 2: result = a - b;
                printf("Result = %.2f", result);
                break;
        case 3: result = a * b;
                printf("Result = %.2f", result);
                break;
        case 4: if(b != 0)
                    result = a / b;
                else {
                    printf("Division by zero not allowed!");
                    break;
                }
                printf("Result = %.2f", result);
                break;
        default: printf("Invalid choice!");
    }
}
