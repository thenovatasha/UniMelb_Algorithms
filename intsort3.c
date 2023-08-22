/*Write a function void int_sort3(int *p1, int *p2, int *p3) that orders its three arguments from smallest to largest.
This time you may make use of the int_swap function. If you do, be sure to think carefully about the types,
 and what the arguments should be when it is called.
Your function will be tested by a scaffold included in program.c. You cannot modify the main function.*/

#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
void int_sort3(int *x1, int *x2, int *x3);
void int_sort2(int *x1, int *x2);

/* scaffolding to test the required function */
int
main(int argc, char *argv[]) {

    /* get three values */
    printf("Enter three integers: ");
    int v1, v2, v3;
    if (scanf("%d%d%d", &v1, &v2, &v3) != 3) {
        printf("Invalid input\n");
        exit(EXIT_FAILURE);
    }

    /* test the function with the input */
    printf("Before: v1 = %d, v2 = %d, v3 = %d\n", v1, v2, v3);
    int_sort3(&v1, &v2, &v3);
    printf("After:  v1 = %d, v2 = %d, v3 = %d\n", v1, v2, v3);

    return 0;
}

// TODO: implement the int_sort3 function
// test three integers and sort if out of order

void int_sort3(int *x1, int *x2, int *x3) {

    int_sort2(x1, x2);
    int_sort2(x2, x3);
    int_sort2(x1, x2);

    return;
}

void int_sort2(int *x1, int *x2){
    int tmp;
    if (*x1 >= *x2) {
        tmp = *x2;
        *x2 = *x1;
        *x1 = tmp;
        return;
    }
    return;

}