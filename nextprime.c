#include <stdio.h>
#include <stdlib.h>

/*Write a program nextprime that calculates the next prime number after a given value.*/

/*Enter an integer value: 8
The next prime is     : 11*/
/*Enter an integer value: 87654321
The next prime is     : 87654337*/


int main(int argv, char *argc[])
{   
    int number, isprime = 0;

    printf("Enter an integer value: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Pleae enter a valid number\n");
        exit(EXIT_FAILURE);
    }
    
    while (!isprime)
    {
        number++;
        isprime = 1;
        for (int i = 2; i * i <= number; i++)
        {
            
            if (number % i == 0)
            {
                isprime = 0;
            }
        }
        if (isprime)
        {
            printf("The next prime is     : %d\n", number);
        }
        
    }
    
    return 0;

}