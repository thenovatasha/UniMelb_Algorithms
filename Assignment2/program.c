/*  Program to print a formatted output of unique values and their counts
    as provided by the user. Written for course Foundations of Algorithms
    Semester 2, 2023 University of Melbourne 
    Author: Nova Tasha
*/

#include <stdio.h>
#include <stdlib.h>
#define MAXVAL 1000

int read_values(int primary_arr[]);
void int_swap(int *p1, int *p2);
void sort_int_array(int A[], int n);
int count_frequency(int freq_arr[], int count_arr[], int size);
void print_format(int arr1[], int arr2[], int size);

int main(int argc, char *argv[])
{   
    int unique_vals;
    int arr[MAXVAL];
    /* Read the values and return the size of array */
    int size = read_values(arr);
    /* If no values read, then exit program */
    if (size <= 0)
    {
        exit(EXIT_FAILURE);
        return 0;
    }
    /* Initialize a count array with 0's */
    int count[MAXVAL] = {0};
    /* Get the unique values and store counts in an array*/
    unique_vals = count_frequency(arr, count, size);
    print_format(arr, count, unique_vals);

    return 0;
}

/* Read the values input by user, store them an array
 and return read count */
int read_values(int primary_arr[])
{
    
    int input = 0;
    int size = 0;
    int excess = 0;
    printf("Enter as many as 1000 values, ^D to end\n");
    /* Only count integer values */
    while(scanf("%d", &input) == 1)
    {
        
        if (size == MAXVAL)
        {
            excess++;
        }
        else
        {
            /* Place the value in the array */
            primary_arr[size] = input;
            size++;
        }
    }
    /* If surplus values provided, print the count of excess values */
    if (excess)
    {
        printf("%d excess discarded\n", excess);
    }
    printf("%d values read into array\n", size);
    
    /* Return counted values*/
    return size;

}
/* Sort the array in ascending order */
void
sort_int_array(int A[], int n)
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

/* Count the frequency of every unique value in an array
 and store the counts in another array */
int count_frequency(int freq_arr[], int count_arr[] , int size)
{
    
    int idx = 1;
    /* Get sorted array first */
    sort_int_array(freq_arr, size);
    
    /* Pump prime the first count */
    count_arr[0] = 1;
    
    for (int i = 1; i < size; i++)
    {
        /* Check if the ith position value is a repeat */
        if (freq_arr[i] != freq_arr[idx - 1])
        {
            /* Since not repeat, place value at position
            pointed by idx, and increment count */
            freq_arr[idx] = freq_arr[i];
            count_arr[idx] = count_arr[idx] + 1;
            /* Create space for new values */
            idx++;

        }
        /* a repeat value is found*/
        else
        {
            /* Increase the count */
            count_arr[idx - 1] = count_arr[idx - 1] + 1;
        }
    }
    /* Return the number of unique values (size of count array)*/
    return idx;    
}

/* Format the output from both arrays upto size of frequencies
 and print it */
void print_format(int arr1[], int arr2[], int size)
{
    /* Print according to required format */
    printf("Value   Freq\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d ", arr1[i]);
        printf("%6d\n", arr2[i]);
    }
}