/* Write a program that formats product information entered by the user. A session with the program should
   look like this:

   Enter item number: 583
   Enter unit price: 13.5
   Enter purchase date (mm/dd/yyyy): 10/24/2010

   Item         Unit        Purchase
                Price       Date
   583         $  13.50    10/24/2010


    Item nubmer and date should be left justified; the unit price should be right justified. Allow dollar amounts 
    up to $9999.99. Hint: Use tabs to line up the columns.
*/

#include <stdio.h>

int main(void)
{
    int itemNum, mm, dd, yyyy;
    float unitPrice;

    printf("Enter item number: ");
    scanf("%d", &itemNum);
    
    printf("Enter unit price (max 9999.99): ");
    scanf("%f", &unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("\n\tItem\t\tUnit\t\tPurchase\n");
    printf("\t\t\tPrice\t\tDate\n");


    return 0;
}