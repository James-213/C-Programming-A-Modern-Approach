/* Modified version of 2-5 so that there are fewer multiplications that are performed:
   ((((3*x + 2)*x -5)*x -1)*x +7)*x -6

   This is known as Horner's Rule
*/

#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter an int value for x: ");
    scanf("%d", &x);

    int y = ((((3*x + 2)*x -5)*x -1)*x +7)*x -6;

    printf("Polynomial = %d", y);

    return 0;
}