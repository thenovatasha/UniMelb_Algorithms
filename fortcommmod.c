
/* fortcomm.c: Cut out FORTRAN-style comments.
 * Alistair Moffat, December 2012, PPSAA Figure 4.13 pg58
 * (c) University of Melbourne */

/* Modified by Nova Tasha*/

/* Starting with the program fortcomm.c shown in Figure 4.13 on page 58 (also found in "Reading data with loops"),
 write a program that replaces each C99-style comment in the input text by an equivalent ANSI C comment. */


//     **** Start here:      //My useful program 
                          //                    ^
                          // backslash last = 0
                          // incomment = 1
                         /**/

#include <stdio.h>

int
main(int argc, char *argv[]) {
	int ch, incomment = 0, backslashlast = 0;
    // int hold_char = 0;
	while ((ch = getchar()) != EOF) {
        
        if (ch == '/') {
            if (backslashlast) 
            {
                incomment = 1;
                backslashlast = 0;
                printf("/*");
            }
            else
            {
                backslashlast = 1;
            } 
        }
        if (incomment && (ch == '\n'))
        {
            printf(" */");
            incomment = 0;
        }  
        if (backslashlast && ch != '/')
        {   
            printf("/");
            backslashlast = 0;
            
            // putchar(ch);
        }
        if (ch != '/')
        {
            putchar(ch);

        }

    }
 
    return 0;

}