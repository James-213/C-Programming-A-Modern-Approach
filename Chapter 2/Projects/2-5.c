/* Write a program that asks the suer to enter a value for x
   and then displays the value of the following polynomial:
   3x^5 + 2x^4 - 5x^3 - x^2 +7x - 6
*/

#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter an int value for x: ");
    scanf("%d", &x);

    int y = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*x - 6;

    printf("Polynomial = %d", y);

    return 0;
}