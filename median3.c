#include <stdio.h>
#include <stdlib.h>
int max_2_ints(int, int, int*);
int median_3_ints(int n1, int n2, int n3);
int main(int argc, char *argv[]) {
    
    int n1, n2, n3;
    printf("Enter three integers: ");
    if (scanf("%d %d %d", &n1, &n2, &n3) != 3) {
        printf("Couldn't read 3 values, try again");
    }
    median_3_ints(n1, n2, n3);
    return 0;
}

int median_3_ints(int n1, int n2, int n3){
// 3 4 2
    int min_2, median, max_2;
    max_2 = max_2_ints(n1, n2, &min_2);
    if (n3 > max_2) {
        median = max_2;
    }
    else if (n3 > min_2) {
        median = n3;
    }
    else {
        median = min_2;
    }
    printf("median_3_ints(%d, %d, %d) = %d\n", n1, n2, n3, median);
    return median;
}

int max_2_ints(int n1, int n2, int *min_2){
    if (n1 > n2) {
        *min_2 = n2;
        return n1;
    }
    else {
        *min_2 = n1;
        return n2;
    }

}