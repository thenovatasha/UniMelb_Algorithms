/* Exercise 7.08: k'th smallest in array
 * Scaffold by Alistair Moffat, August 2013
 * (c) University of Melbourne */

#include <stdio.h>
#include <stdlib.h>
#include "arrayops.h"

/* maximum array size allowed */
#define MAXVALS 1000

/* function prototypes */
int kth_smallest(int[], int, int);


/* scaffolding to test the required function */
int
main(int argc, char *argv[]) {
    int numbers[MAXVALS];
    int valid = read_int_array(numbers, MAXVALS);

    printf("Before: ");
    print_int_array(numbers, valid);

    /* test some values */
    for (int k = 0; k < valid; k++) {
        printf("The %d'th smallest is %d\n", k,
               kth_smallest(numbers, valid, k));
    }

    /* prove that we did not modify the array */
    printf("After: ");
    print_int_array(numbers, valid);

    return 0;
}
// TODO: implement kth_smallest
void int_swap(int *p1, int *p2);
void sort_int_array(int A[], int n);

int kth_smallest(int A[], int n, int k)
{

    int B[n];
    for (int i = 0; i < n; i++)
    {
        B[i] = A[i];
    }

    /* Sort B*/
    sort_int_array(B, n);

    return B[k];
}

void sort_int_array(int A[], int n)
{
    
    /* assume that A[0] to A[n-1] have valid values */
    for (int i = 1; i < n; i++)
    {
        /* swap A[i] left into correct position (increasing order). */
        for (int j = i - 1; j >= 0 && A[j] > A[j + 1]; j--)
        {
            /* not there yet */
            int_swap(&A[j], &A[j + 1]);
        }
    }
}
/* Swap two integers */
void
int_swap(int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}