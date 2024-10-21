/*write a programme that take a number and print the english term of the number.*/
#include<stdio.h>
int main()
{
    int digit;

    printf("Enter Any digit from (0-9): ");
    scanf("%d",&digit);
    switch(digit)
    {
        digit=8;//The statements written avobe cases are never executed.
    case 0:
        printf("You have pressed number \"Zero\"");
        break;
    case 1:
        printf("You have pressed  \"One\"");
        break;
    case 2:
        printf("You have pressed  \"Two\"");
        break;
    case 3:
        printf("You have pressed  \"Three\"");
        break;
    case 4:
        printf("You have pressed  \"Four\"");
        break;
    case 5:
        printf("You have pressed  \"Five\"");
        break;
    case 6:
        printf("You have pressed  \"Six\"");
        break;
    case 7:
        printf("You have pressed \"Seven\"");
        break;
    case 8:
        printf("You have pressed  \"Eight\"");
        break;
    case 9:
        printf("You have pressed  \"Nine\"");
        break;
    default:
        printf("You press number Invalid Key for this programme.");

    }
    return 0;

}
