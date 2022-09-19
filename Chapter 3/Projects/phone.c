/* Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx
   and then displays the number in the form xxx.xxx.xxxx
   
   Enter phone number [(xxx) xxx-xxxx]: (407) 817-6900
   You entered 404.817.6900

*/

#include <stdio.h>

int main(void)
{

   int area, firstThree, lastFour;
   printf("Enter phoone number [(xxx) xxx-xxxx]: ");
   scanf("(%3d) %3d-%4d", &area, &firstThree, &lastFour);

   printf("You entered %3d.%3d.%4d", area, firstThree, lastFour);

   return 0;
}