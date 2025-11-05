// Program to simulate a simple ATM menu
#include <stdio.h>
void main() 
{
    int choice;
    float balance = 1000.0, amount;

    printf("ATM Menu:\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Current Balance: %.2f", balance);
                break;
        case 2: printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("New Balance: %.2f", balance);
                break;
        case 3: printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if(amount <= balance)
                    balance -= amount;
                else
                    printf("Insufficient Balance!\n");
                printf("Remaining Balance: %.2f", balance);
                break;
        case 4: printf("Thank you for using ATM!");
                break;
        default: printf("Invalid option!");
    }
}