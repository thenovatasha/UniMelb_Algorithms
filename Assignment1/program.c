/* Author: Nova Tasha */
/* Student ID: 1385214 */
/* Date of Submission: 12 Aug 2023 */

#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[])
{
    int next;

    printf("Enter numbers: ");
    // Check if valid input
    while (scanf("%d", &next) == 1) 
    {
        // Format and output
        printf("%2d |", next);
        for (int i = 0; i < next; i++) 
        {
            printf("*");
        }
        printf("\n");
    }
    // If the stream wasn't closed (e.g., by Ctrl+D or Ctrl+Z)
    if (!feof(stdin)) 
    {
        printf("Invalid input!\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}
