// What output do the following calls of printf produce?

#include <stdio.h>

int main(void)
{
    printf("%6d, %4d\n\n", 86, 1040);

    printf("%12.5e\n\n", 30.253);

    printf("%.4f\n\n", 83.162);

    printf("%-6.2g", .0000009979);

    return 0;
}