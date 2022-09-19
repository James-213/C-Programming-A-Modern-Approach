/* COmputes the dimensional weight fo a 12" x 10" x 8" box */

#include <stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10, volume, weight;

    volume = height * length * width;
          
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches) : %d\n", volume);
    printf("Dimensional weight (pounds) : %d\n", (volume + 165) / 166);   // a volume of 166 would give 333/166 = 1, this is all due to c rounding down

    return 0;
}