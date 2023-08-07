#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[])
{
    
    int k;
    k = 1;
    int j = 32;
    for (int i = 32; i <= 126; i++) 
    {
        if (i == 32) 
        {   
            printf("           +0  +1  +2  +3  +4  +5  +6  +7\n");
            printf("        +--------------------------------\n");
            printf("    %3d |", j);
        }
        printf("   ");
        putchar(i);
        
        if (k % 8 == 0)
        {
            j += 8;
            printf("\n");
            printf("    %3d |", j);
            
        }
        
        
        k++;
    }
    printf("\n");
    
    return 0;
}