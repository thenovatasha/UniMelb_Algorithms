
#include <stdio.h>
#include <stdlib.h>



void longest_ascending_run(int A[], int n, int *strt, int *leng);
int main(int argc, char *argv[])
{
    int strt;
    int leng;
    int A[] = {5, 10, 20, 8, 9 , 10 , 11, 12, 0, 1, 2, 3, 4, 1, 0, 1, 0, 9, 10};
    longest_ascending_run(A, 19, &strt, &leng);
    printf("%d %d", strt, leng);
    return 0;
}

void longest_ascending_run(int A[], int n, int *strt, int *leng){

    *strt = 0;
    int curr_index = 0;
    int longest_run = 0;
    *leng = 1;
    for (int i = 1; i < n; i++)
    {
        if (A[i] > A[i - 1])
        {
            (*leng)++;
            if (*leng > longest_run)
            {
                longest_run = *leng;
                *strt = curr_index;
            }
        }
        else
        {
            if(*leng > longest_run){
                longest_run = *leng;
                *strt = curr_index;
            }
            curr_index = i;
            *leng = 1;   
        }
    }
    *leng = longest_run;
}