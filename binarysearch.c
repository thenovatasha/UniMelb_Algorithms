#include <stdio.h>
#include <stdlib.h>

#define NOT_FOUND -1
#define MAXVAL 1000
#define FIRST_INDEX 0
void print_array(int to_sort[], int array_length);
void get_search_val(int *store);
int get_int(int arr[]);

int search(int array[], int l, int r, int val);
void sort_int_array(int A[], int n);
void int_swap(int *p1, int *p2); 


int main(int argc, char *argv[])
{
    int array_length, index;
    int value;
    int general_array[MAXVAL];
    
    get_search_val(&value);
    printf("Please enter up to %d values\n", MAXVAL);
    array_length = get_int(general_array);
    print_array(general_array, array_length);
    sort_int_array(general_array, array_length);
    index = search(general_array, FIRST_INDEX, array_length - 1, value);
    
    if (index == NOT_FOUND)
    {
        printf("Value is not in array\n");
        return 0;
    }
    else{
    printf("Value %d found at %d\n", value, index);
    }
    return 0;
    
}

int get_int(int arr[])
{
    int input;
    int array_len = 0;
    int excess = 0;
    while (scanf("%d", &input) == 1)
    {
        if (array_len == MAXVAL)
        {
            excess++;
        }
        else
        {
            arr[array_len] = input;
            array_len++;
        }
    }
    if (excess)
    {
        printf("%d excess values discared", excess);
    }
    printf("%d values read into array\n", array_len);
    return array_len;

}

void print_array(int array[], int len)
{

    for(int i = 0; i < len; i++)
    {
        printf("  %2d", array[i]);
    }
    printf("\n");
}

int search(int array[], int l, int r, int val)
{
    int mid;
    
    /* End of array reached */
    if (l > r)
    {
        return NOT_FOUND;
    }
    /* Set midpoint */
    mid = (l + r)/2;

    /* Value is found */
    if (array[mid] == val)
    {
        return mid;
    }
    /* Search the upper half */
    else if (val > array[mid]) 
    {
        return search(array, mid + 1, r, val);
    } 
    /* Search the lower half */
    else
    {
        return search(array, l, mid - 1, val);
    }

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
void get_search_val(int *store)
{
    printf("Please enter a value to search for\n");
    if (scanf("%d", store) == 1)
    {
        return;
    }
    else
    {
        printf("What the hell did you just input\n");
        exit(EXIT_FAILURE);
    }

}