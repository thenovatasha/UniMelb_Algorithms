#include <stdio.h>


int main (int argv, char *argc[]) 
{
    int i;
    int sum = 0;
    for (i = 1; i < 10; i++) {
        sum = sum + i;
        printf("S(%2d) = %2d\n", i, sum);
        
    }
    return 0;
}
