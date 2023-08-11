
/* fortcomm.c: Cut out FORTRAN-style comments.
 * Alistair Moffat, December 2012, PPSAA Figure 4.13 pg58
 * (c) University of Melbourne */

/* Modified by Nova Tasha*/

/* Starting with the program fortcomm.c shown in Figure 4.13 on page 58 (also found in "Reading data with loops"),
 write a program that replaces each C99-style comment in the input text by an equivalent ANSI C comment. */


//     **** Start here:      //My useful program 
                          // ^
                          // backslash last = 0
                          // incomment = 1
                         /**/

                         

#include <stdio.h>
#define STAR 42
#define FWDSLASH 47
int main(int argc, char *argv[]) {
	int ch, incomment = 0, backslashlast = 0;
    // int hold_char = 0;
	while ((ch = getchar()) != EOF) {

        // Check for consecutive backslashes
        
        if (ch == '/')
        {
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
          
        if (backslashlast && ch != '/')
        {   
            backslashlast = 0;
            putchar(FWDSLASH);
        }
        if (ch == '\n')
        {
            if (incomment) {
                printf("*/");
            }
            incomment = 0;
        }    
        if (ch != '/')
        {
            putchar(ch);

        }

    }
    printf("Done\n");
    

    return 0;

}




