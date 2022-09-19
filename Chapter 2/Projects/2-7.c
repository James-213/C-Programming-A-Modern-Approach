/* Write a program that asks the user to enter a U.S. dollar amount 
   and then shows how to pay that amount using the smallest nubmer of
   $20, $10, $5, $1 bills:

   Enter a dollar amount: 93
   $20 Bills: 4
   $10 Bills: 1
   $5 Bills: 0
   $1 Bills: 3

   Hint: Divide the amount by 20 to determine then umber of bills needed and repeat with smaller bills
*/

#include <stdio.h>

int main(void)
{
    int dollarAmount;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollarAmount);

    int bills20 = dollarAmount / 20;
    int newAmount20 = dollarAmount - (20*bills20);
    int bills10 = newAmount20 / 10;
    int newAmount10 = dollarAmount - (20*bills20) - (10*bills10);
    int bills5 = newAmount10 / 5;
    int newAmount5 = dollarAmount - (20*bills20) - (10*bills10) - (5*bills5);
    int bills1 = newAmount5 / 1;

    printf("$20 Bills: %d\n", bills20);
    printf("$10 Bills: %d\n", bills10);
    printf("$5 Bills: %d\n", bills5);
    printf("$1 Bills: %d\n", bills1);

    return 0;
}