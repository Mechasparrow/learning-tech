#include <stdio.h>

/* print Fahrenheit-Celsius Table
   for fahr = 0,20,..300 */

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20; /* step size */

  //Print out the heading for the Table
  printf("Fahrenheit \t Celsius\n");
  printf("__________ \t _______\n");
  
  // Prints out the Fahrenheight -> Celsius Rows
  for (fahr = lower; fahr <= upper; fahr = fahr + step) {
    celsius = 5.0 * (fahr -32.0) / 9.0;
    printf("%3.0f \t\t %6.1f\n", fahr, celsius);
  }
  
}

