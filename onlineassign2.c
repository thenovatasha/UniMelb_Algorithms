#include <stdio.h>
#include <stdlib.h>

int mystery(int n) {
    if (n < 1)
        n += 1;
        return n;
    return mystery(n-1) + mystery(n-2);
}
int main(int argc, char *argv[]){

    printf("%d", mystery(6));
    return 0; 
}