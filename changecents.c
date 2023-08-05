/*Suppose that coins are available in denominations of 50c, 20c, 10c, 5c, 2c and 1c.

Write a program that reads an integer amount of cents between 0 and 99
(your program might check that the input value falls within this range)
 and prints out the coins necessary to make up that amount of money.*/

/* Example call: 

Enter amount in cents: 67
The coins required to make 67 cents are:
give a 50c coin
give a 10c coin
give a  5c coin
give a  2c coin
amount remaining: 0c

 */

#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]) {

    int cents;
    printf("Enter amount in cents: ");
    if (scanf("%i", &cents) != 1){

        printf("Please enter a valid amount\n");
        exit(EXIT_FAILURE);
    }
    if (cents > 99 || cents < 0) {
        printf("Please enter a value between 0 and 99\n");
        exit(EXIT_FAILURE);
    }
    printf("The coins required to make %d cents are:\n", cents);
    int remaining_cents = cents;
    while (1) {
        if (remaining_cents == 50 || remaining_cents == 20 || remaining_cents == 10 || remaining_cents == 5 || remaining_cents == 2 || remaining_cents == 1 || remaining_cents == 0) {

            printf("give a %2dc coin\n", remaining_cents);
            remaining_cents = 0;
            break;
        }
        else if (remaining_cents > 50) {
            printf("give a 50c coin\n");
            remaining_cents -= 50;
        }
        else if (remaining_cents > 20) {
            printf("give a 20c coin\n");
            remaining_cents -= 20;
        }
        else if (remaining_cents > 10) {
            printf("give a 10c coin\n");
            remaining_cents -= 10;
        }
        else if (remaining_cents > 5) {
            printf("give a  5c coin\n");
            remaining_cents -= 5;
        }
        else if (remaining_cents > 2) {
            
            printf("give a  2c coin\n");
            remaining_cents -= 2;

        }
        else {
            printf("give a 1c coin\n");
            remaining_cents -= 1;
        }
    }
    printf("amount remaining: %dc\n", remaining_cents);
    return 0;
}