#include <stdio.h>
#include <stdlib.h>
int isperfect(int);
int nextperfect(int);
int main(int argc, char *argv[]) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isperfect(n)) {
        printf("%d is a perfect number\n", n);
    }
    else {
        printf("%d is not a perfect number\n", n);
    }

    printf("The next perfect is %d\n", nextperfect(n));
    
    return 0;
}

int isperfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {

        if (n%i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
            return 1;
        }
        else {
            return 0;
        }
}

int nextperfect(int n) {

    n = n + 1;

    while (!(isperfect(n))) {

        n++;
    }
    return n;
}
