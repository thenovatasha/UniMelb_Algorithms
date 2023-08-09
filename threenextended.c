/* Exercise 4.08 scaffold: 3n+1 problem
 * from PPSAA 2012, Figure 4.9.
 * Alistair Moffat, March 2013
 * (c) University of Melbourne */

/* Write a program modifying the code above that searches for some starting number n
that produces the longest sequence of numbers in the computation.
That is, instead of starting from just one number n and producing its sequence, loop from 1 to some number nmax
finding which out of those starting numbers (seeds) leads to the longest sequence.
Report the length of the longest cycle generated, and the seed that started that cycle.*/

/* Sample: 
Enter value for nmax: 50
start =      27, cycles =   111, max =       9232*/

#include <stdio.h>
#include <stdlib.h>

#define PERLINE 8

int
main(int argc, char *argv[]) {
    // ask for starting value for n
    int nmax;
    printf("Enter a value for nmax: ");
    if (scanf("%d", &nmax) != 1) {
        printf("Incorrect input\n");
        exit(EXIT_FAILURE);
    }
    int total_max = 0, max_cycles = 0;
    int start_max;
    for (int i = 0; i <= nmax; i++)
    {
        
        int k = i;
        int max = k, cycles = 0;
        // print the initial value
        //printf("%5d ", k);
        while (k > 1) {
            // calculate and print the next value
            if (k % 2 == 0) {
                k = k / 2;
            } else {
                k = 3 * k + 1;
            }
            // printf("%5d ", k);
            // is this the new maximum value?
            if (k > max) {
                max = k;
            }

            cycles += 1;
            /*if (cycles % PERLINE == 0) {
                printf("\n");
            }*/
    }
        if (cycles >= max_cycles)
        {
            total_max = max;
            max_cycles = cycles;
            start_max = i;
        }
        // printf("\n%d cycles consumed, maximum was %d\n", cycles, max);    
    }
    printf("start =%8d, cycles =%6d, max =%11d", start_max, max_cycles, total_max);
    
    return 0;
}