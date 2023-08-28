/* {10, 13, 16, 18, 15, 22, 21}
  3 inversions */

#include <stdio.h>
#include <stdlib.h>
#define MAXVAL 1000

int num_inversions(int[], int);
void print_arr(int *p, int size);
int read_vals(int nums[]);

int main(int argc, char *argv[])
{

    int inversions;
    int vals_read;
    int nums_arr[MAXVAL];
    vals_read = read_vals(nums_arr);
    printf("Array: ");
    print_arr(nums_arr, vals_read);
    inversions = num_inversions(nums_arr, vals_read);
    printf("There are %d inversions\n", inversions);
    return 0;
}
int num_inversions(int arr[], int len){

    int inversions = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                inversions++;
            }
        }
    }
    return inversions;

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