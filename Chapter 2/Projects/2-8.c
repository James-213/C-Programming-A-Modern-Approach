/* Write a program that calculates the remaining balance on a loan after the
   first, second, and third monthly payments. Display the balance with two digits
   after the decimal point. 
   Hint: Each month, the balance is decreased by the amount of each payment, but inreased
   by the balance times the monthly interest rate. To find the interest rate, convert the interest
   rate entered by the user to a percentage and divide by 12.
*/

#include <stdio.h>

int main(void)
{
    float loanAmount;
    float interestRate;
    float monthlyPayment;

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    float monthlyInterest = interestRate / (12*100);
    float firstMonthBalance = loanAmount - monthlyPayment + (loanAmount*monthlyInterest);
    float secondMonthBalance = firstMonthBalance - monthlyPayment + (firstMonthBalance*monthlyInterest);
    float thirdMonthBalance = secondMonthBalance - monthlyPayment + (secondMonthBalance*monthlyInterest);

    printf("Balance remaining after first payment: $%.2f\n", firstMonthBalance);
    printf("Balance remaining after second payment: $%.2f\n", secondMonthBalance);
    printf("Balance remaining after third payment: $%.2f\n", thirdMonthBalance);

    return 0;

}