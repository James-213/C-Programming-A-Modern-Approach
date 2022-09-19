/* Program that breaks down an ISBN entered by the user

    Enter ISBN: 978-0-393-97950-3
    GS1 prefix: 978
    Group identifier: 0
    Publisher code: 393
    Item number: 97950
    check digit: 3
*/

#include <stdio.h>

int main(void)
{
    int GS1, group, pub, item, check;

    printf("Enter ISBN: ");
    scanf("%3d-%1d-%3d-%5d-%1d", &GS1, &group, &pub, &item, &check);

    printf("GS1 prefix: %3d\n", GS1);
    printf("Group identifier: %1d\n", group);
    printf("Publisher code: %3d\n", pub);
    printf("Item number: %5d\n", item);
    printf("Check digit: %1d\n", check);

    return 0;
}