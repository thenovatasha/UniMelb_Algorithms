#include <stdio.h>
#include <stdlib.h>

int expn(int, int);
int main(int argc, char *argv[]){
    int n, r;
    printf("Enter the base and the exponent: ");
    scanf("%d %d", &n, &r);
    printf("%d^%d = %d\n", n, r, expn(n, r));
    return 0;
}

int expn(int n, int r){
    if (r == 0) {
        return 1;
    }
    if (r == 1){
        return n;
    }
    else{
        return n * expn(n, (r - 1));
    }
}