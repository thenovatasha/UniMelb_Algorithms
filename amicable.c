#include <stdio.h>
#include <stdlib.h>
/*Two numbers are an amicable pair if their factors (excluding themselves) add up to each other. The first such pair is 220,
 which has the factors [1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110], adding up to 284;
  and 284, which has the factors [1, 2, 4, 71, 142], the sum of which is 220.
 The next amicable pair is 1,184 and 1,210; and then 2,620 and 2,924.*/

/* int amicable_pair(int n1, int n2);
Specifically, return 0 if they are not amicable, and 1 if they are amicable.*/ 

int amicable_pair(int n1, int n2);
int sum_factors(int num);

int main(int argc, char *argv[]){
    int int1, int2;
    printf("Enter two integers: ");
    if(scanf("%d %d", &int1, &int2) != 2) {
        printf("Enter valid values");
        exit(EXIT_FAILURE);
    }
    amicable_pair(int1, int2);
    return 0;
}

int amicable_pair(int n1, int n2){

    if ((sum_factors(n1) == n2) && (sum_factors(n2) == n1) && (sum_factors(n1) != n1 || sum_factors(n2) != n2)) {
        
        printf("%d and %d are an amicable pair\n", n1, n2);
        return 1;
    }
    printf("%d and %d are not an amicable pair\n", n1, n2);
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
