/* In Exercise 2.08, you were asked to write a program that converted temperatures from 
Fahrenheit to Celsius. Extend that program by adding in the reverse transformation.*/

/*Enter a temperature: 212F
The temperature 212.0F converts to 100.0C */


#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]) {
    double temperature, items_scanned, farenheit, celsius;
    char unit;
    printf("Enter a temperature: ");
    items_scanned = scanf("%lf%c", &temperature, &unit);
    if (items_scanned != 2 || ( unit!= 'F' && unit != 'C')) {
        printf("Please enter a valid input, C/F, integer temperatures only");
    }
    
    if (unit == 'C') {
        farenheit =  (temperature * 9.0/5) + 32;
        printf("The temperature %.1fC converts to %.1fF\n", temperature, farenheit);
    }
    else {

        celsius =  (temperature - 32) * 5.0/9;
        printf("The temperature %1.1fF converts to %1.1fC\n", temperature, celsius);
    }

    return 0;

}
