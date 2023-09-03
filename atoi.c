/* Exercise 7.14: Read a string, then convert to an integer
 * Scaffold by Alistair Moffat, October 2013.
 * (c) University of Melbourne */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXSTR 100

/* function prototypes */

int my_atoi(char str[]);
int read_line(char str[], int max);

/* scaffolding to test the required function */
int
main(int argc, char *argv[]) {
	char str[MAXSTR];
	printf("Enter an integer, then return: ");
	while (read_line(str, MAXSTR) == 1) {
		printf("The string \"%s\" ", str);
		int n = my_atoi(str);
        printf(" corresponds to integer %d\n", n);
	}
}

/* converts a string to an integer
*/
int
my_atoi(char str[]) {
	// TODO: Implement this function
    int len = 0;
    int nums = 0;
    while (str[len])
    {
        if(str[len] <= 57 && str[len] >= 48)
        {
            nums++;
        }
        len++;
    }

    int sum = 0;
    int negative = 0;
    int num = 0;
    for(int i = 0; i < len; i++)
    {
        
        if(str[i] == '-')
        {
            negative = 1;
            continue;
        }
        else if (str[i] > 57 || str[i] < 48)
        {
            continue;
        }

        int factor = nums - (num++);
        if (factor == 0)
        {
            sum += str[i] - 48;
            
        }
        else
        {
            int ten = 1;
            for(int j = 1; j < factor; j++)
            {
                ten *= 10;
            }
            sum += ten * (str[i] - 48);
        }
        
    }
    if(negative)
        {
            sum = sum *(-1);
        }
    return sum;

}


/* read one line of input into a string of maximum length.  (ex7-12 soln.)
 * returns 1 if there still is text to be read (no EOF sent), 0 otherwise */
int
read_line(char str[], int max) {
    int n = 0, c;
    while ((c = getchar()) != EOF && c != '\n') {
        str[n++] = c;
        if (n == max - 1) {
            str[n++] = '\0';
            return 1;
        }
    }
    if (c == EOF && n == 0) {
        return 0;
    }
    str[n++] = '\0';
    return 1;
}
