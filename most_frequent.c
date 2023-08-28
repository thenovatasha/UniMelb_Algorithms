#include <stdio.h>
#include <stdlib.h>
#define MAXVAL 1000
int most_frequent(int A[], int n);
int read_vals(int nums[]);
void sort_int_array(int A[], int n);
void int_swap(int*, int*);
void print_arr(int *p, int);

int main(int argc, char *argv[])
{
    int most_freq;
    int vals_read;
    int nums_arr[MAXVAL];
    vals_read = read_vals(nums_arr);
    printf("Before: ");
    print_arr(nums_arr, vals_read);
    most_freq = most_frequent(nums_arr, vals_read);
    printf("After : ");
    print_arr(nums_arr, vals_read);
    printf("Most frequent value is %d", most_freq);
    

    return 0;
}
// 1 1 2 3 3 4
//     ^
// 1 2 3 3
//   ^  
int most_frequent(int A[], int n)
{
    /* Make a copy of A*/

    int B[n];
    for (int i = 0; i < n; i++)
    {
        B[i] = A[i];
    }
    sort_int_array(B, n);
    
    int prev_count = 0;
    int prev_greatest = B[0];
    int current_count = 1;

    for (int i = 1; i < n; i++)
    {
        if (B[i] == B[i - 1])
        {
            
            /* its a repeat*/
            current_count++;
            if (current_count > prev_count)
            {
                    /* New smallest value found */
                    prev_greatest = B[i - 1];
                    prev_count = current_count;
            }

        }
        else
        {
            /* Check if current count is most frequent */
            if (current_count > prev_count)
            {
                
                /* New smallest value found */
                prev_greatest = B[i - 1];
                prev_count = current_count;

            }
            current_count = 1;
            
        }
    }
    return prev_greatest;
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

void sort_int_array(int A[], int n)
{
    
    /* assume that A[0] to A[n-1] have valid values */
    for (int i = 1; i < n; i++)
    {
        /* swap A[i] left into correct position (increasing order). */
        for (int j = i - 1; j >= 0 && A[j] > A[j + 1]; j--)
        {
            /* not there yet */
            int_swap(&A[j], &A[j + 1]);
        }
    }
}
/* Swap two integers */
void
int_swap(int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void print_arr(int nums[], int size)
{

    for (int i = 0; i < size; i++)
    {

        printf("  %2d", nums[i]);

    }
    printf("\n");
}
