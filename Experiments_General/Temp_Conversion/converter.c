/**
 * Michael Navazhylau 2019
 * Temperature conversion program Celsius to Fahrenheit and vice versa
 * */

#include "cheader.h"
#include "temp_conversions.h"

int main() {
    //the input temperature and temperature type
    float input_temp_str;
    char temp_type;

    //prompt the user for input
    printf("What is the temperature you want to convert?: ");
    scanf("%f %c", &input_temp_str, &temp_type);

    float f; // temperature in fahrenheit
    float c; // temperature in celsius
    if (temp_type == 'F') {
        f = input_temp_str;
        c = FtoC(f);
    }else if (temp_type == 'C') {
        c = input_temp_str;
        f = CtoF(c);
    }


    printf("Temperature: \n");
    printf ("%.2f deg Fahrenheiht\n", f);
    printf("================\n");
    printf("%.2f deg Celsius\n", c);

    return 0;
}