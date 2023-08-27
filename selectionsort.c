#include <stdio.h>
#include <stdlib.h>
#define MAXVAL 1000 
void selection_sort(int unsorted[], int n);
int read_vals(int nums[]);
void print_arr(int nums[], int size);
void intswap(int *p1, int *p2);

int main(int argc, char *argv[])
{
    int vals_read;
    int nums[MAXVAL];
    vals_read = read_vals(nums);
    printf("Before: ");
    print_arr(nums, vals_read);
    selection_sort(nums, vals_read);
    printf("After : ");
    print_arr(nums, vals_read);

    return 0;
}

void selection_sort(int unsorted[], int n)
{
    int min;
    for (int i = 0; i < n; i++)
    {
        min = unsorted[i];
        for(int j = i; j < n; j++)
        {
            if (unsorted[j] < min)
            {
                min = unsorted[j];
                intswap(&unsorted[j], &unsorted[i]);
            }
        }
    }
    return;
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
void intswap(int *p1, int *p2){

    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
    return;
}

void print_arr(int nums[], int size)
{

    for (int i = 0; i < size; i++)
    {

        printf("  %2d", nums[i]);

    }
    printf("\n");
}
