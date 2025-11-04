// Program to perform basic arithmetic operations based on user input
#include <stdio.h>
void main() 
{
    char op;
    int a, b;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(op == '+')
        printf("Result = %d", a + b);
    else if(op == '-')
        printf("Result = %d", a - b);
    else if(op == '*')
        printf("Result = %d", a * b);
    else if(op == '/')
        printf("Result = %d", a / b);
    else
        printf("Invalid Operator");
}
