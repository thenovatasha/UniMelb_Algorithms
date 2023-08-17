#include <stdio.h>
#include <stdlib.h>

/* function prototypes */

int max_2_ints(int n1, int n2);

int
main(int argc, char *argv[]) {

    /* get two integers */
    printf("Enter two integers: ");
    int n1, n2;
    if (scanf("%d %d", &n1, &n2) != 2) {
        printf("Error in input\n");
        exit(EXIT_FAILURE);
    }

    /* scaffolding -- get the larger integer */
    int max = max_2_ints(n1, n2);
    printf("max_2_ints(%d, %d) = %d\n", n1, n2, max);

    return 0;
}

