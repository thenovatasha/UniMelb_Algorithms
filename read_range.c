#include <stdio.h>
#include <stdlib.h>

#define LO 10
#define HI 100

#define READ_ERROR 0
#define READ_OK    1

/* function prototypes */

void print_result(int read_result, int num);
int read_num(int lo, int hi, int *num);
void int_swap(int *p1, int *p2);

int
main(int argc, char *argv[]) {

    int num, res;

    printf("Testing read_num(%d, %d, &num)\n", LO, HI);
    res = read_num(LO, HI, &num);
    print_result(res, num);

    printf("Testing read_num(%d, %d, &num)\n", HI, LO);
    res = read_num(HI, LO, &num);
    print_result(res, num);

    return 0;
}

/* Prints the results of testing the read_num function */
void
print_result(int read_result, int num) {

    if (read_result == READ_OK) {
        printf("Read successful, num = %d\n", num);
    } else {
        printf("Read failed.\n");
    }
}

/* Read numbers until one in the desired range from lo to hi is entered.
   If scan successful, stores it in variable pointed to by num, returns READ_OK.
   If scan fails, returns READ_ERROR.
*/
int
read_num(int lo, int hi, int *num) {
    if (lo > hi) {
       int_swap(&lo, &hi);
    }

    printf("Enter a number between %d and %d inclusive: ", lo, hi);

    int next;
    
   
    while (scanf("%d", &next) == 1) {
        /* Got a number, return it if in range, otherwise try again */
        if (lo <= next && next <= hi) {
            *num = next;
            return READ_OK;
        }
        printf("%d is not between %d and %d\nTry again: ", next, lo, hi);
    }
    /* No valid numbers found, and scanf has failed */
    return READ_ERROR;
}
void int_swap(int *p1, int *p2){
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}
