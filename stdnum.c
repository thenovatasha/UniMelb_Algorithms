/*  Program to print a formatted output of unique values and their counts
    as provided by the user. Written for course Foundations of Algorithms
    Semester 2, 2023 University of Melbourne 
    Author: Nova Tasha
*/

#include <stdio.h>
#include <stdlib.h>
#define MAXVAL 1000
int read_values(int primary_arr[], int secondary_array[]);
void int_swap(int *p1, int *p2);
void sort_int_array(int A[], int B[], int n);



int main(int argc, char* argv[])
{
    int student_id[MAXVAL] = {0}, mark[MAXVAL] = {0};
    int vals_read;
    vals_read = read_values(student_id, mark);
    sort_int_array(student_id, mark, vals_read);
    printf("studnum  mark\n");
    for(int i = 0; i < vals_read; i++){

        printf("%d   %d\n", student_id[i], mark[i]);
    }

    return 0;
}

/* Read the values input by user, store them an array
 and return read count */
int read_values(int primary_arr[], int secondary_arr[])
{
    int input = 0;
    int size1 = 0;
    int size2 = 0;
    int excess = 0;
    printf("Enter as many as 1000 \"studnum mark\" pairs, ^D to end\n");
    /* Only count integer values */
    int arr_n = 0;
    while(scanf("%d", &input) == 1)
    {
        
        if (size1 == MAXVAL || size2 == MAXVAL)
        {
            excess++;
        }
        else
        {   
            if (arr_n == 0)
            {
            /* Place the value in the array */
            primary_arr[size1] = input;
            size1++;
            arr_n = 1;
            }
            else
            {
                secondary_arr[size2] = input;
                size2++;
                arr_n = 0;
            }
        }

    }
    /* for(int i = 0; i < size1; i++){

        printf("Student %d and ID %d\n", primary_arr[i], secondary_array[i]);
    } */

    /* If surplus values provided, print the count of excess values */
    if (excess)
    {
        printf("%d excess discarded\n", excess);
    }
    printf("%d pairs read into arrays\n", size1);
    
    /* Return counted values*/
    return size1;

}
/* Sort the array in ascending order */
void
sort_int_array(int A[], int B[], int n)
{
    
    /* assume that A[0] to A[n-1] have valid values */
    for (int i = 1; i < n; i++)
    {
        /* swap A[i] left into correct position (increasing order). */
        for (int j = i - 1; j >= 0 && A[j] > A[j + 1]; j--)
        {
            /* not there yet */
            int_swap(&A[j], &A[j + 1]);
            int_swap(&B[j], &B[j + 1]);
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