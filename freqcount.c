#include <stdio.h>
#include <stdlib.h>
/*Write a program that reads 
as many as 1,000 integer values, and counts
 the frequency of each value in the input.*/
#define MAXVAL 1000
int read_values(int primary_arr[]);
void int_swap(int *p1, int *p2);
void sort_int_array(int A[], int n);
int count_frequency(int freq_arr[], int count_arr[], int size);

void print_format(int arr1[], int arr2[], int size);
int main(int argc, char *argv[])
{   
    int size;
    
    int arr[MAXVAL];
    size = read_values(arr);
    int count[MAXVAL] = {0};
    size = count_frequency(arr, count, size);
    print_format(arr, count, size);

    return 0;
}


int read_values(int primary_arr[]) {
    int input = 0;
    int size = 0;
    int excess = 0;
    printf("Enter as many as 1000 values, ^D to end\n");
    
    while(scanf("%d", &input) == 1)
    {
        if (size == MAXVAL)
        {
            excess++;
        }
        else
        {
            primary_arr[size] = input;
            size++;
        }
    }
    if (excess)
    {
        printf("%d excess discarded\n", excess);
    }
    printf("%d values read\n", size);
    return size;

}
void
sort_int_array(int A[], int n) {
    /* assume that A[0] to A[n-1] have valid values */

    for (int i = 1; i < n; i++) {
        /* swap A[i] left into correct position (increasing order). */
        for (int j = i - 1; j >= 0 && A[j] > A[j + 1]; j--) {
            /* not there yet */
            int_swap(&A[j], &A[j + 1]);
        }
    }
}
void
int_swap(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int count_frequency(int freq_arr[], int count_arr[] , int size)
{
    
    int idx = 1;
    sort_int_array(freq_arr, size);
    
    count_arr[0] = 1;
    
    for (int i = 1; i < size; i++){

        if (freq_arr[i] != freq_arr[idx - 1]) {
            freq_arr[idx] = freq_arr[i];
            count_arr[idx] = count_arr[idx] + 1;
            idx++;

        }
        else {
            count_arr[idx - 1] = count_arr[idx - 1] + 1;
        }
    }
    
    return idx;

    
}
void print_format(int arr1[], int arr2[], int size)
{

    printf("Value   Freq\n");
    for (int i = 0; i < size; i++){

        printf("%4d ", arr1[i]);
        printf("%6d\n", arr2[i]);
    }
}