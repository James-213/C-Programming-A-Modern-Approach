/* Write a program that computes the volume of a sphere with a 10-meter radius, using the formula
   v = 4/3 * pi * r^3 (Try writing it as 4/3. What happens?). Hint: C doesn't have an exponention
   operator, so you'll need to multiply r by itself twice to compute r^3
 */

#include <stdio.h>

int main(void)
{

  float radius_m;
  printf("Enter a radius (m): ");
  scanf("%f", &radius_m);
    
  float pi = 3.14159;
  float volume = (4.0f/3.0f) * pi * (radius_m * radius_m * radius_m);

  printf("Volume (m^3) = %.2f", volume);

  return 0;
}

