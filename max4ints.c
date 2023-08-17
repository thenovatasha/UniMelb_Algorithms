#include <stdio.h>
#include <stdlib.h>

int max_2_ints(int n1, int n2);
int max_4_ints(int n1, int n2, int n3, int n4);
int main(int argc, char *argv[]) {
    int n1, n2, n3, n4;
    printf("Enter four integers: ");
    if (scanf("%d %d %d %d", &n1, &n2, &n3, &n4) != 4) {
        printf("Couldn't read 4 values, try again");
    }

    printf("max_4_ints(%d, %d, %d, %d) = %d\n",n1, n2, n3, n4, max_4_ints(n1, n2, n3, n4));

    return 0;
}        

int max_4_ints(int n1, int n2, int n3, int n4){
    int max_1_2, max_2_4;
    max_1_2 = max_2_ints(n1, n2);
    max_2_4 = max_2_ints(n3, n4);

    return max_2_ints(max_1_2, max_2_4);
}
int max_2_ints(int n1, int n2){
    if (n1 > n2) {
        return n1;
    }
    else {
        return n2;
    }
}