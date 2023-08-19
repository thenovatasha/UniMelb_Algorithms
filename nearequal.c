#include <stdio.h>
#include <stdlib.h>


int near_equal(double x1, double x2);

int main(int argc, char *argv[]){
    double n1, n2;
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &n1, &n2) != 2) {
        printf("Two numbers not found");
        exit(EXIT_FAILURE);
    }
    if (near_equal(n1, n2)) {
        printf("Deemed near equal\n");
    }
    else{
        printf("Deemed different\n");
    }
    
    return 0;
}

int near_equal(double x1, double x2){
    double difference = 0;
    
    if (x1 == 0 && x2 == 0) {
        return 1;
    }
    else{
        if (x1 != 0) {
            
            difference = (x2 - x1)/x1;
        }
        else{
            difference = (x1 - x2)/x2;
        }
    }
    if (difference > -0.0001 && difference < 0.0001){
        
        return 1;
    }
    return 0;

}