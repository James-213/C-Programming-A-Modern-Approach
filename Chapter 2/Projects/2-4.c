/* Write a program that asks users to enter a dollars and cents amount, 
   then displays the amount with 5% tax added */

#include <stdio.h>

int main(void)
{
    float billAmount;

    printf("Enter an amount: ");
    scanf("%f", &billAmount);

    float tax = 0.05;

    float taxedBill = billAmount + (billAmount * tax);

    printf("With tax added: %.2f", taxedBill);

    return 0;

}