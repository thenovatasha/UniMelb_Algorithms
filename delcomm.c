#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[])
{
    int ch, in_comment = 0, prev_char = ' ';
   
    while((ch = getchar()) != EOF)
    {
        

        if (in_comment)
        {
            if (ch == '/')
            {
                if (prev_char == '*')
                {
                    in_comment = 0;
                    prev_char = ' ';
                }
                else
                {
                    prev_char = ch;
                    
                }
            }
            else
            {
                prev_char = ch;
                
            }
        }
        else
        {
            
            if (ch == '*')
            {
                
                if (prev_char == '/')
                {
                    in_comment = 1;
                    prev_char = ' ';
                }
                else
                {
                    putchar(ch);
                    prev_char = ch;
                }
            }
            else
            {   
                if (ch == '/')
                {
                    if (prev_char == '/')
                    {
                        putchar(ch);
                    }
                    prev_char = '/';
                }

                else if (prev_char == '/')
                {
                    printf("/");
                    putchar(ch);
                    prev_char = ch;
                }
                else
                {
                    putchar(ch);
                    prev_char = ch;
                }
            }
        }
       
    }

    return 0;
}