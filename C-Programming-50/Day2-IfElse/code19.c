// Program to identify whether a character is an uppercase letter, lowercase letter, digit, or special character
#include <stdio.h>
void main() 
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase Letter");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase Letter");
    else if(ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Special Character");
}
