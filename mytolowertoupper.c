#include <stdlib.h>
#include <stdio.h>

void mytolower(int ch);
int main(int argc, char *argv[]) {

    int ch;
    while(((ch = getchar()) != EOF)){

        mytolower(ch);
    }


    return 0;


}

void mytolower(int ch){

    if (ch >= 65 && ch <= 90) {

        putchar(ch + 32);
    }
    else {
        putchar(ch);
    }  
}