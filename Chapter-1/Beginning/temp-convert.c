#include <stdio.h>

/* print Fahrenheit-Celsius Table
   for fahr = 0,20,..300 */

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
  float fahr, celsius;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    celsius = 5.0 * (fahr -32.0) / 9.0;
    printf("%3.0f %6.1f\n", fahr, celsius);
  }
  
}

