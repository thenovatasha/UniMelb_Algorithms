#include <stdio.h>

int main(int argv, char *argc[]) {

    int loopstart = 0;
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {   
        printf("Loop Started with: %d", loopstart);
        printf("CH = %d", ch);
    }
    return 0;
}