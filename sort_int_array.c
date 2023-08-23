/* Read an array, sort it, write it out again.
 * Figure 7.3 PPSAA, insertionsort.c - Alistair Moffat
*/
#include <stdio.h>


#define MAXVALS 1000

/* function prototypes */
void sort_int_array(int A[], int size);
int sort_reduce_int_array(int A[], int n);
void int_swap(int *pi, int *p2);
void
int_swap(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}
// NOTE: you may define additional functions!
// sort_int_array, read_int_array, print_int_array, int_swap are in arrayops.h
void print_int_array(int A[], int n);
int read_int_array(int A[], int maxvals);
int read_int_array(int A[], int maxvals) {
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

void
print_int_array(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf(" %3d", A[i]);
    }
    printf("\n");
}
int
main(int argc, char *argv[]) {
    /* get the input */
	int numbers[MAXVALS], nnumbs;
	nnumbs = read_int_array(numbers, MAXVALS);
    
	printf("Before: ");
	print_int_array(numbers, nnumbs);
    //sort_int_array(numbers, nnumbs);
	nnumbs = sort_reduce_int_array(numbers, nnumbs);
    
	printf("After : ");
	print_int_array(numbers, nnumbs);
   
    
	return 0;
}
void
sort_int_array(int A[], int n) {
    /* assume that A[0] to A[n-1] have valid values */

    for (int i = 1; i < n; i++) {
        /* swap A[i] left into correct position (increasing order). */
        for (int j = i - 1; j >= 0 && A[j] > A[j + 1]; j--) {
            /* not there yet */
            int_swap(&A[j], &A[j + 1]);
        }
    }
}

int
sort_reduce_int_array(int A[], int n) {
	int i, newn;
	/* simple defensive test to make the rest easier */
	if (n==0) {
		return 0;
	}
	/* first, sort the array */
	sort_int_array(A, n);
	/* always accept first item into the output array */
	newn = 1;
	/* now do the reduction, starting at the second item, and
	   bypassing items that are same as the last one already placed
	   at the tail of the front part of the reduced A */
	for (i=1; i<n; i++) {
		if (A[i] != A[newn-1]) {
			A[newn] = A[i];
			newn++;
		}
	}
	return newn;
}