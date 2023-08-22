#include <stdio.h>
#include <stdlib.h>

int get_int(char *c);
int error_if(int n);
int main(int argc, char *argv[]){
    
    int a;
    a = get_int("What is the month?: ");
    printf("%d", a);
    return 0;
}

int get_int(char *c){
    int num;
    printf("%s", c);
    if (scanf("%d", &num) != 1){

        printf("Please enter 1 number\n");
        exit(EXIT_FAILURE);
    }
    return num;
}

int error_if(int n){

    if (n == 1){
        printf("SCREEEECH");
        return 0;
    }
    else{
        printf("NO screech");
        return 1;
    }
}
