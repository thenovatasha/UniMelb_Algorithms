#include <stdio.h>
#include <stdlib.h>

int sum_factors(int num);
int amicable_pair(int, int);
int main(int argc, char *argv[]){
    int n;
    int next;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (1) {
        next = 1;
        while (next <= 2 * n) {

            if (amicable_pair(n, next)) {
                printf("Amicable! %d and %d", n, next);
                return 1;
            }
            else {
                next++;
            }
        }
        n++;

    }
    return 0;
}

int amicable_pair(int n1, int n2){

    if ((sum_factors(n1) == n2) && (sum_factors(n2) == n1) && (sum_factors(n1) != n1 || sum_factors(n2) != n2)) {
        
        
        return 1;
    }

    return 0;
}

int sum_factors(int num){
    int sum = 0;
    int i;
    if (num <= 1) {
        return 0;
    }
    for(i = 1; i < num; i++) {
        if (num % i == 0){
            sum += i;
        }
    } 
    return sum;
}
