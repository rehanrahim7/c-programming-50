// Program to perform basic arithmetic operations based on user choice
#include <stdio.h>
void main() 
{
    int choice;
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Sum = %.2f", a + b); break;
        case 2: printf("Difference = %.2f", a - b); break;
        case 3: printf("Product = %.2f", a * b); break;
        case 4: if(b != 0)
                    printf("Quotient = %.2f", a / b);
                else
                    printf("Cannot divide by zero!");
                break;
        default: printf("Invalid choice!");
    }
}