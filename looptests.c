#include <stdio.h>


int main (int argv, char *argc[]) 
{
    int i,j;
    
    for (i = 1; i < 8; i++)
     {
        for (j = i+1; j < 8; j += 3)
        {
            printf("i=%d, j=%d\n", i, j);
        }
        
        
    }
    return 0;
}
