#include <stdio.h>
#include <stdlib.h>
/*Write a function void int_sort2(int* p1, int* p2) that orders its two arguments so that the numerically
smaller value is placed into the underlying variable corresponding to the first pointer argument,
and the larger into the variable corresponding to the second argument pointer.
Do not use the int_swap function discussed in Section 6.7 of PPSAA (but you can refer to its code).
You have been provided with scaffolding to test your function.*/


/* function prototypes */

void int_sort2(int *x1, int *x2);

/* scaffolding to test that function */
int
main(int argc, char *argv[]) {

    /* get two numbers */
    printf("Enter two integers: ");
    int v1, v2;
    if (scanf("%d%d", &v1, &v2) != 2) {
        printf("Invalid input\n");
        exit(EXIT_FAILURE);
    }

    /* test the function with the input */
    printf("Before: v1 = %d, v2 = %d\n", v1, v2);
    int_sort2(&v1, &v2);
    printf("After:  v1 = %d, v2 = %d\n", v1, v2);

    return 0;
}

// TODO: implement the int_sort2 function
// test two integers and exchange if out of order
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