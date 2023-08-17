/* Write a function int n_choose_k(int n, int k) that calculates and returns this value. */
/* Enter n and k: 5 2
5 choose 2 = 10*/
#include <stdio.h>
#include <stdlib.h>
int factorial(int num);
int n_choose_k(int, int);
int main(int argc, char *argv[]) {
    int k, n;
    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);

    printf("%d choose %d = %d\n", n, k, (n_choose_k(n, k)));
    return 0;
}

int n_choose_k(int n, int k) {

    // nCk = n!/(n-k)! * k!
    // printf("Factorial of n = %d\n", factorial(n));
    // printf("Factorial of n-k = %d\n", factorial(n-k));
    // printf("Factorial of k = %d\n", factorial(k));
    
    
    return (factorial(n)/(factorial(n-k) * factorial(k)));

}

int factorial(int num) {
    int fact = 1;

    for (int i = num; i >= 1; i--) {

        fact = fact * i;
    }
    return fact;
}

