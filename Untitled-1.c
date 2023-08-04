#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    

    double a, b, c, determinant, root, root1, root2;
    // Get 3 numbers (coefficients)
    printf("Enter a b c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input\n");
        exit(EXIT_FAILURE);
    } ;
    // Calculate the determinant
    determinant = (b * b) - (4 * a * c);
    printf("Equation %.1fx^2 + %.1fx + %.1f = 0 has\n", a, b, c);
    // Check if there is a solution
    if (a == 0 || (b == 0 && c == 0)) {
        printf("\tan infinite number of solutions");
    }
    else if (determinant < 0) {
        
        printf("\tan no real roots");
    } else if (determinant == 0) {

        root = (-b + sqrt(determinant)) / (2 * a);
        printf("\tone real root: x = %.1f", root);
    } else {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);
        printf("\ttwo real roots: x1 = %.1f, x2 = %.1f", root1, root2);
    }
    return 0;
}