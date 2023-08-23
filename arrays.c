#include <stdio.h>
#include <stdlib.h>

// * means --> value at address
// we declare with * because when we say argv[] --> it gives the address of the first element of that array
// however, we could say pointer argv[] but pointer is not a type. So we have to get the value at the address with *, and 
// then it would reurn a data type. Which would then mean char *argv[] is used because the data type returned by investigating 
// the address of the variable being pointed to is a character data type. 
//MAYBE flawed?

void check(int cow[]);
int main(int argc, char *argv[]){
    int arrayyyyy[] = {404, 1, 5 , 20};
    printf("%d", arrayyyyy);
    check(arrayyyyy);
    return 0;
}

void check(int cow[]){


    printf("%d", cow);
}