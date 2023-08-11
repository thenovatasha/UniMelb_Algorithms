
/* fortcomm.c: Cut out FORTRAN-style comments.
 * Alistair Moffat, December 2012, PPSAA Figure 4.13 pg58
 * (c) University of Melbourne */

/* Modified by Nova Tasha*/

/* Starting with the program fortcomm.c shown in Figure 4.13 on page 58 (also found in "Reading data with loops"),
 write a program that replaces each C99-style comment in the input text by an equivalent ANSI C comment. */

//CHECK: 

// //// ***** this code is bad, comment it out *****
//   ^
// printf("Hello world\n"); /* prints hello world */
// return 0;
// /* done, phew! */
                         

#include <stdio.h>
#define STAR 42
#define FWDSLASH 47
int main(int argc, char *argv[]) {
	int ch, incomment = 0, slashlast = 0, starlast = 0;
    
	while ((ch = getchar()) != EOF) {

    // check if line is in comment
        if (incomment)
        {   
            
            // Ignore any other /* combinations
            if (ch == '/')
            {
                if (starlast) {
                    starlast = 0;
                    continue;
                }
                if (slashlast)
                {
                    printf("/");
                }
                slashlast = 1;

            }
            // if newline found, set end */
            else {
                
                if (ch == '*')
                {
                    
                    if (slashlast) {
                        slashlast = 0;
                        continue;
                    }
                    if (starlast)
                    {
                        printf("*");
                    }
                    starlast = 1;
                }
                else
                {
                    
                    if (ch == '\n')
                    {
                        if (starlast)
                        {
                            printf("*");
                            starlast = 0;
                            
                        }
                        else if (slashlast)
                        {
                            printf("/");
                            slashlast = 0;
                            
                        }
                        incomment = 0;
                        printf(" */");
                        putchar(ch);
                        
                    }
                    else
                    {
                        if (starlast)
                        {
                            printf("*");
                            putchar(ch);
                        }
                        else if (slashlast)
                        {
                            printf("/");
                            putchar(ch);
                        }
                        else
                        {
                            putchar(ch);
                        }
                        starlast = 0;
                        slashlast = 0;
                    }
                }
                
                
            }    
        }
        else
        {
            // Not in comment
            
            //Check for // combination and replace with /* combination
            if (ch == FWDSLASH)
            {
                //Two slashes foud
                if (slashlast)
                {
                    incomment = 1;
                    printf("/*");
                    // Done checking for slashes
                    slashlast = 0;
                }
                else
                {
                    slashlast = 1;
                }
                
                
            }   
            else
            {
                if (slashlast)
                {
                    // Print the previous slash then print self.
                    printf("/");
                    putchar(ch);
                    slashlast = 0;
                }
                else
                {
                    putchar(ch);
                    slashlast = 0;
                }
                
            }

        }

    }
    

    return 0;

}
