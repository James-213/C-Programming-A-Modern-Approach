/* Program that asks the user to enter the numbers from 1 to 16 (in any order) and then
   displays the nubmers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
   and diagonals:

   Enter the numbers from 1 to 16 in any order: 
   16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

   16  3   2 13
    5 10  11  8
    9  6   7 12
    4 15  14  1 

    Row sums: 34 34 34 34
    Column sums: 34 34 34 34
    Diagonal sums: 34 34

*/

#include <stdio.h>

int main(void)
{

    // Declaring all the variables needed
    int num0, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15;


    // Enter nums
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num0, &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9,
                                                             &num10, &num11, &num12, &num13, &num14, &num15);
    
    // Formatted output to show 4x4 matrix
    printf("%2d %2d %2d %2d\n", num0, num1, num2, num3);
    printf("%2d %2d %2d %2d\n", num4, num5, num6, num7);
    printf("%2d %2d %2d %2d\n", num8, num9, num10, num11);
    printf("%2d %2d %2d %2d\n", num12, num13, num14, num15);

    // Sum of each row
    int r1Sum = num0 + num1 + num2 + num3;
    int r2Sum = num4 + num5 + num6 + num7;
    int r3Sum = num8 + num9 + num10 + num11;
    int r4Sum = num12 + num13 + num14 + num15;

    printf("Row sums: %2d %2d %2d %2d\n", r1Sum, r2Sum, r3Sum, r4Sum);

    // Sum of each column
    int c1Sum = num0 + num4 + num8 + num12;
    int c2Sum = num1 + num5 + num9 + num13;
    int c3Sum = num2 + num6 + num10 + num14;
    int c4Sum = num3 + num7 + num11 + num15;

    printf("Column sums: %2d %2d %2d %2d\n", c1Sum, c2Sum, c3Sum, c4Sum);

    // Sum of diagonals
    int diagTopLeft = num0 + num5 + num10 + num15;
    int diagTopRight = num3 + num6 + num9 + num12;

    printf("Diagonal sums: %2d %2d", diagTopLeft, diagTopRight);

    return 0;
}