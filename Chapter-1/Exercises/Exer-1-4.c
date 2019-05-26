#include <stdio.h>

/* print Fahrenheit-Celsius Table
   for fahr = 0,20,..300 */

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = -20; /* lower limit of temperature table */
  upper = 30; /* upper limit */
  step = 5; /* step size */

  //Print out the heading for the Table
  printf("Celsius \t Fahrenheit\n");
  printf("__________ \t _______\n");
  
  // Prints out the Fahrenheight -> Celsius Rows
  for (celsius = lower; celsius <= upper; celsius += step) {
    fahr = celsius * (9.0/5.0) + 32;
    printf("%3.0f \t\t %6.1f\n", celsius, fahr);
  }
  
}

