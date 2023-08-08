#include <stdio.h>
#include <stdlib.h>
/*
Author: Nova Tasha

Write a program that reads a sequence of integers and draws a simple graph.
Assume that all of the values read are between 1 and 70, though you do not need to check that they are.
An extra leading space is expected when printing out numbers less than 10, to right align the output numbers.

Sample: 
Enter numbers: 20 25 30 28 26 22 17 14 13 5
20 |********************
25 |*************************
30 |******************************
28 |****************************
26 |**************************
22 |**********************
17 |*****************
14 |**************
13 |*************
 5 |*****
*/
int main(int argv, char *argc[])
{

    int next;

    printf("Enter numbers: ");
     
    if (scanf("%d", &next) != 1) 
    {
        printf("Enter a number ya fuckken moron");
        exit(EXIT_FAILURE);

    }
    else 
    {   

        printf("%2d |", next);
        for (int i = 0; i < next; i++) 
        {
            printf("*");
        }
        printf("\n");
    }
    while (scanf("%d", &next) == 1) 
    {
        printf("%2d |", next);
        for (int i = 0; i < next; i++) 
        {
            printf("*");
        }
        printf("\n");

    }
    
    return 0;

}