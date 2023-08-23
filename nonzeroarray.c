/* array operations
 * Alistair Moffat, PPSAA, Chapter 7, December 2012
 * (c) University of Melbourne */
#include <stdio.h>


/* ****
 * These functions are very slightly modified from insertionsort.c in Figure 7.4
 * Fig 7.4 on pg107 in PPSAA by Alistair Moffat, updating style and comments.
 * **** */



/* read integers from input and store them in an array.
 * maxvals is the maximum number of elements that can be read in to the array,
 * all other values are discarded
 * returns the number of elements successfully read in
 * (insertionsort.c, Figure 7.4 PPSAA) */
int
read_int_array(int A[], int maxvals) {
    int n = 0, excess = 0, next;

    printf("Enter as many as %d values, ^D to end\n", maxvals);
    while (scanf("%d", &next) == 1) {
        if (n == maxvals) {
            excess += 1;
        } else {
            A[n] = next;
            n += 1;
        }
    }

    printf("%d values read into array", n);
    if (excess) {
        printf(", %d excess values discarded", excess);
    }
    printf("\n");
    return n;
}

/* print the elements of an array on one line
 * (insertionsort.c, Figure 7.4 PPSAA) */
void
print_int_array(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf(" %3d", A[i]);
    }
    printf("\n");
}


/* Exercise 7.01: Check if an int array contains non-zero integers
 * Scaffold: Jianzhong Qi, May 2013; Liam Saliba, 2021
 * (c) University of Melbourne */


/* maximum array size allowed */
#define MAXVALS 1000

/* function prototypes */
int all_zero(int A[], int n);

int
main(int argc, char *argv[]) {
    /* get the input */
    int numbers[MAXVALS];
    int valid = read_int_array(numbers, MAXVALS);

    printf("The array: ");
    print_int_array(numbers, valid);

    /* check if the array contains non-zero integers */
    if (all_zero(numbers, valid)) {
        printf("only contains zeros\n");
    } else {
        printf("contains non-zero values\n");
    }

    return 0;
}

// TODO: implement all_zero below
int all_zero(int A[], int n){

    for(int i = 0; i < n; i++){

        if (A[i] != 0) {

            return 0;
        }
        
    }
    return 1;
}