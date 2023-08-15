#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    int count = 0;
    double num, input_num;

    printf("Enter a number: ");
    if (scanf("%lf", &input_num) != 1){
        exit(EXIT_FAILURE);
        return 1;
    }
    num = input_num;
    while (num >= 1){

        num = num / 2;
        if (num <= 1) {
            count++;
            break;
        }
        else {
            count++;
        }
    }
    printf("ceil log2(%.2f) = %d\n", input_num, count);
    return 0;
}