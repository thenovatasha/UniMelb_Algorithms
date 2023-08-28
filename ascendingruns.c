/*One way of quantifying how close an array is to being sorted is the number of ascending runs.
For example, in the array {10, 13, 16, 18, 15, 22, 21} there are three runs present,
starting at 10, 15 and 21. The ascending run starting from 10 is {10, 13, 16, 18},
from 15 is {15, 22}, and from 21 is {21}.

Task
Write a function that returns the number of runs present in the integer array A of size n.
int num_ascending_runs(int A[], int n)
You should not modify the array A.

Write a main function that matches the sample output to test your function.*/

#include <stdio.h>
#include <stdlib.h>
#define MAXVAL 1000

int num_ascending_runs(int A[], int n);
void print_arr(int *p, int size);
int read_vals(int nums[]);

int main(int argc, char *argv[])
{

    int runs;
    int vals_read;
    int nums_arr[MAXVAL];
    vals_read = read_vals(nums_arr);
    printf("Array: ");
    print_arr(nums_arr, vals_read);
    runs = num_ascending_runs(nums_arr, vals_read);
    printf("There are %d runs\n", runs);


    return 0;
}

int num_ascending_runs(int A[], int n)
{

    if (n < 1)
    {
        return 0;
    }
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (A[i] >= A[i - 1]) 
        {
            /* Inside run */
            continue;
        }
        else{
            /* Run ended */
            count++;
        }


    }
    return count;
    
}

void print_arr(int *p, int size)
{

    for (int i = 0; i < size; i++)
    {

        printf("  %2d", p[i]);

    }
    printf("\n");
}

int read_vals(int nums[])
{
    int next;
    int size = 0, excess = 0;
    printf("Enter as many as 1000 values, ^D to end\n");
    while(scanf("%d", &next) == 1){

        if (size == MAXVAL)
        {
            excess++;
        }
        else
        {
            nums[size] = next;
            size++;
        }
    }
    if (excess) {
        printf("%d excess values discarded\n", excess);
    }
    printf("%d values read into array\n", size);
    return size;
}
