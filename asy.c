#include <stdio.h>
#include <stdlib.h>

#define n 400

int main(void){
    int i, j, k, count = 0;

    for (i = n/2; i <=n; i++){
        for (j = 1; j <= n; j*=2){
            for (k= 1; k<=n;k++){
                count++;
            }
        }

    }

    printf("%d", count);


    return 0;
}