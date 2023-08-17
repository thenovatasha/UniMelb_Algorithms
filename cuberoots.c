#include <stdio.h>
#include <stdlib.h>
double cube_root(double v);
int main(int argc, char *argv[]){
    double v;
    printf("Enter a number: ");
    scanf("%lf", &v);
    printf("Cube root is %f", cube_root(v));
    return 0;
}

double cube_root(double v) {
    double next = 1.0;
    int i;
    if (v >= 1e+6 || v <= 1e-6) {
        printf("WARNING: cube root may be inaccurate\n");
    }
    for (i = 0; i < 25; i++){

        next = (2*next + v/(next*next))/3;
    }
    return next;
}