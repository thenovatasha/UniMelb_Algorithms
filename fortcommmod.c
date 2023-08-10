
/* fortcomm.c: Cut out FORTRAN-style comments.
 * Alistair Moffat, December 2012, PPSAA Figure 4.13 pg58
 * (c) University of Melbourne */

/* Modified by Nova Tasha*/

/* Starting with the program fortcomm.c shown in Figure 4.13 on page 58 (also found in "Reading data with loops"),
 write a program that replaces each C99-style comment in the input text by an equivalent ANSI C comment. */


//     **** Start here:      //Hello '\n' and check next line 
                          //  ^

#include <stdio.h>

int
main(int argc, char *argv[]) {
	int ch, incomment = 0, backslashlast = 1;
    int hold_char = 0;
	while ((ch = getchar()) != EOF) {

        if (ch == '/') {
            if (backslashlast) 
            {
                incomment = 1;
                hold_char = 0;
            }
            else
            {
                backslashlast = 1;
            }
            if (!incomment)
            {
                hold_char += 1;
            }
            if (incomment)
            {
                printf("*/");
            }

        }
        if (hold_char == 2)
        {
            printf("/");
            hold_char = 0;
        }

    }
    return 0;

}