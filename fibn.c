/* Write a program that prints out the number of spores present at the end of each day,
stopping when the number of spores exceeds ten million.*/

/* After 3 days, 2 spores
After 4 days, 3 spores
After 5 days, 5 spores
After 6 days, 8 spores */

// 1, 1, 2, 3, 5, 8, 13, 21
// ---------^--------------
/* F(n) after nth day  counting from n=1 F(2) = 1 and F(n) = F(n-1) + F(n-2)*/

#include <stdio.h>
int n;
int day, curr_spore, prev_spore, curr_temp, next_spore;
int main(int argv, char *argc[]) 
{
    prev_spore = 1;
    curr_spore = 2;
    next_spore = 2;
    for (day = 3; day < 100; day++)
    {   
        if (curr_spore >= 10000000) {
            break;
        }
        curr_spore = next_spore;
        next_spore = curr_spore + prev_spore;
        prev_spore = curr_spore; 
        printf("Afer %d days, %d spores\n", day, curr_spore);

    }

    return 0;
}