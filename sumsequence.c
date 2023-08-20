#include <stdio.h>
#include <stdlib.h>

double sum_sequence(int n);
double sum_to(int);
double fact(int);
int main(int argc, char *argv[]) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d gives sequence sum of %.10lf\n", n, sum_sequence(n));

    
    return 0;
}



double sum_sequence(int n) {

    if (n == 1) {
        return 1;
    }
    else {

        return ((double)sum_to(n))/fact(n) + sum_sequence(n -1);
    }
}

double sum_to(int n) {
    double sum = 0;
    for (int i = 0; i <= n; i ++){

        sum += i;
    }
    return sum;
}

double fact(int n) {
    if (n <= 1){
        return 1;
    }
    double fact = 1;
    for (int i = 1; i <= n; i++){

        fact = fact * i;
    }
    return fact;
}