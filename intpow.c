/*Write an int function int_pow that raises its first argument to
 the power of its second argument, where the first argument is an int,
 and the second argument is a positive int. For example, 
 int_pow(3, 4) should return the value 81. */

/* Enter the base and the exponent: 3 4
3^4 = 81
*/
 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char *argv[]){

    int base, exponent, result = 1;
    printf("Enter the base and the exponent: ");
    if (scanf("%d %d", &base, &exponent) != 2) {
        printf("Oops");
        exit(EXIT_FAILURE);
    }

    for (int i = 1; i <= exponent; i++){
        result  = base * result;
        
        
    }
    if (result <= 0) {
        printf("Error: Integer overflow when attempting multiplication\n");
        
    }
    else {
        printf("%d^%d = %d\n", base, exponent, result);
    }     
    
    return 0;
 }
 