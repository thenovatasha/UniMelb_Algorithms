#include <stdio.h>
#include <stdlib.h>

int isprime(int);
int next, sum;
int main(int argc, char *argv[]) {
    printf("Please enter numbers: ");
    while ((scanf("%d", &next)) == 1) {
        sum = 0;
        for (int i = 1; i <= next; i++){
            if (isprime(i)){
                
                sum += i;
            }
        }
        if (isprime(sum)){
            printf("Sum of primes <= %d is %d, which is prime\n", next, sum);
        }
        else {
            printf("Sum of primes <= %d is %d, which is not prime\n", next, sum);
        }
    } 
    return 0;
}

int isprime(int number) {
    if (number <= 1){
        return 0;
    }
    for (int i = 2; i*i <= number; i++) {
        if (number % i == 0) {

            return 0;
            
        }
    }
    
    return 1;
}