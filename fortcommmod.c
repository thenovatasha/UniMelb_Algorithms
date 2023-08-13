#include <stdio.h>
#define STAR 42
#define FWDSLASH 47
int main(int argc, char *argv[]) {
	int ch, incomment = 0, slashlast = 0, starlast = 0;
    
	while ((ch = getchar()) != EOF) {

    // check if line is in comment
        printf("%i", incomment);
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