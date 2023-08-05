/* In Exercise 3.07, you were asked to write a program that converted temperatures to and from Fahrenheit
and Celsius. Extend that program by adding conversions for lengths and masses.
Use F for Fahrenheit, C for Celcius (as before), M for miles, K for kilometers,
P for pounds, and G for kilograms (not grams).
One mile is 1.609 kilometers, and one pound is 0.454 kilograms. */

/* Example calls: 
    Enter a quantity: 212F
    The temperature 212.0F converts to 100.0C

    Enter a quantity: 100M
    The distance 100.0 miles converts to 160.9 kilometers

    Enter a quantity: 100G
    The mass 100.0 kilograms converts to 220.3 pounds
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]) {
    double quantity, items_scanned, farenheit, celsius, kilometers, miles, kilograms, pounds;
    char unit;
    printf("Enter a quantity: ");
    items_scanned = scanf("%lf%c", &quantity, &unit);
    if (items_scanned != 2 || ( unit!= 'F' && unit != 'C' && unit != 'M' && unit != 'G' && unit != 'K' && unit != 'P')) {
        printf("Please enter a valid input");
        exit(EXIT_FAILURE);
    }
    
    if (unit == 'C') {
        farenheit =  (quantity * 9.0/5) + 32;
        printf("The temperature %.1fC converts to %.1fF\n", quantity, farenheit);
    }
    else if (unit == 'F') {

        celsius =  (quantity - 32) * 5.0/9;
        printf("The temperature %1.1fF converts to %1.1fC\n", quantity, celsius);
    }
    else if (unit == 'M' || unit == 'K') {
        if (unit == 'M') {
            kilometers = quantity * 1.609;
            printf("The distance %.1f miles converts to %.1f kilometers\n", quantity, kilometers);
        }
        else {
            miles = quantity / 1.609;
            printf("The distance %.1f kilometers converts to %.1f miles\n", quantity, miles);
        }   
    }
    else {
        if (unit == 'G') {
            pounds = quantity / 0.454;
            printf("The mass %.1f kilograms converts to %.1f pounds\n", quantity, pounds);

        }
        else {
            kilograms = quantity * 0.454;
            printf("The mass %.1f pounds converts to %.1f kilograms\n", quantity, kilograms);
        }
    }

    return 0;

}

