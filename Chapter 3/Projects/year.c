/* Write a program that accepts a date from the user in the form mm/dd/yyyy and
   displays it as yyyymmdd:
   Enter a date (mm/dd/yyyy) : 2/17/2011
   You entered the date 20110217
*/

#include <stdio.h>

int main(void)
{
    int year, month, day;

    printf("Enter a date (enter as mm/dd/yyyy) : ");
    scanf("%2d/%2d/%4d", &month, &day, &year);

    
    //printf("\n%d", year);
    //printf("\n%d", month);
    //printf("\n%d", day);
    

    printf("\nYou entered the date %.4d%.2d%.2d", year, month, day);

    return 0;
}